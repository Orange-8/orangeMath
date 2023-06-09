## A simple pratice of math library

### Accuracy to 6 significant figures(float32)|目标精度6位有效数字


### Function prototype|函数原型

1. Trigonometric functions|三角函数

* [ ] sin(x): calculates the sine of x.
* [ ] cos(x): calculates the cosine of x.
* [ ] tan(x): calculates the tangent of x.
* [ ] asin(x): calculates the arc sine (inverse sine) of x.
* [ ] acos(x): calculates the arc cosine (inverse cosine) of x.
* [ ] atan(x): calculates the arc tangent(inverse tangent) of x.

2. Exponential and logarithmic functions|指数与对数函数

* [ ] exp(x): calculates the value of e raised to the power of x.
* [ ] log(x): calculates the natural logarithm (base e) of x.
* [ ] log10(x): calculates the base-10 logarithm of x.
* [ ] pow(x, y): calculates x raised to the power of y.
* [ ] sqrt(x): calculates the square root of x.

3. Hyperbolic functions|双曲函数

* [ ] sinh(x): calculates the hyperbolic sine of x.
* [ ] cosh(x): calculates the hyperbolic cosine of x.
* [ ] tanh(x): calculates the hyperbolic tangent of x.


### Deduction|推导

1. Trigonometric functions

$$
sin(x)=x-\frac{x^3}{3!}+\frac{x^5}{5!}-\cdots+(-1)^n\frac{x^{2n+1}}{(2n+1)!}+o(x^{2n+1})\\
$$

$$
cos(x)=sin(x+\frac{\pi}{2})\\
$$

$$
tan(x)=\frac{sin(x)}{cos(x)}\\
$$

$$
asin(x)=x+\frac{x^3}{6}+\frac{3x^5}{40}+\frac{5x^7}{112}+\frac{35x^9}{1152}+o(x^9)
$$


2. Exponential and logarithmic functions

$$
exp(x)=1+x+\frac{x^2}{2!}+\frac{x^3}{3!}+\cdots+\frac{x^n}{n!}+o(x^n)\\
$$

$$
log(x)=(x-1)-\frac{(x-1)^2}{2}+\frac{(x-1)^3}{3}-\cdots+(-1)^{n-1}\frac{(x-1)^n}{n}+o(x^n)\\
$$

$$
log10(x)=\frac{log(x)}{log(10)}\\
$$

$$
pow(x,y)=exp(log(x)*y)\\
$$

$$
sqrt(x)=pow(x,\frac12)
$$


3. Hyperbolic functions


### ps：

no professional, just for fun. 

非专业，只是想捣鼓一下。现在的编译器好像都把exp、log等用硬件指令加速了，不需要数值计算的方法。
