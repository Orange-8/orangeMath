#include "orangeMath.h"

#define Iterate 20
float _exp(float x)
{
    float result = x;

    for (int i = Iterate; i != 1; --i)
    {
        result = (result / i + 1)*x;
    }
    return result + 1;
}

float _log(float X)
{
    return 0.0f;
}
