#include "orangeMath.h"

#ifdef __GNUC__
#define HUGE_VALF __builtin_huge_valf()
#define HUGE_VALL __builtin_huge_vall()
#define INFINITY __builtin_inff()
#define NAN __builtin_nanf("")
#else
extern const float __INFF;
#define HUGE_VALF __INFF
extern const long double __INFL;
#define HUGE_VALL __INFL
#define INFINITY HUGE_VALF
extern const double __QNANF;
#define NAN __QNANF
#endif /* __GNUC__ */

float _asin(float x)
{
    return x + (x * x * x) / 6 + 3 * (x * x * x * x * x) / 40 + 5 * (x * x * x * x * x * x * x) / 112 + 35 * (x * x * x * x * x * x * x * x * x) / 1152;
}

float __tailerExp(float x)
{
    float result = x;
    for (int i = 10; i != 1; --i)
    {
        result = (result / i + 1) * x;
    }
    return result + 1;
}

float __quickPow(float x, int n)
{
    if (n < 0)
    {
        return 1 / __quickPow(x, -n);
    }
    float result = 1.0f;
    while (n != 0)
    {
        if (n % 2)
            result *= x;
        x *= x;
        n >>= 1;
    }
    return result;
}

float _exp(float x)
{
    if (x > 1)
    {
        return __quickPow(2.71828174591,(int)x)*__tailerExp(x-(int)x);
    }
    else if (x > -1)
    {
        return __tailerExp(x);
    }
    else
    {
        return __tailerExp(x);
    }
}

float __tailerLog(float x)
{
    float term = x - 1;
    float result = 0;
    // 10 epoch good for [0.875,1.125]
    for (int i = 10; i != 0; --i)
    {
        if (i % 2)
        {
            result = (result + 1 / (float)i) * term;
        }
        else
        {
            result = (result - 1 / (float)i) * term;
        }
    }
    return result;
}

float _log(float x)
{
    float result;
    int isNagetive = 0;
    int term = 0;
    if (x <= 0)
    {
        return NAN;
    }
    // transform to (0,8/9)
    if (x > 1.125)
    {
        x = 1 / x;
        isNagetive = 1;
    }

    // to(0.5625,1.125)
    while (x < 0.5625)
    {
        x *= 2;
        term++;
    }

    //(0.875,1.125)
    if (x >= 0.875)
    {
        result = __tailerLog(x);
    }
    //(0.71875,0.875)
    else if (x > 0.71875)
    {
        result = (__tailerLog(x / 0.796875) - 0.227057450635);
    }
    //(0.5625,0.71875)
    else
    {
        result = (__tailerLog(x / 0.640625) - 0.445311016655);
    }

    while (term != 0)
    {
        result -= 0.69314718;
        --term;
    }
    if (isNagetive)
    {
        return -result;
    }
    return result;
}
