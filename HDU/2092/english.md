# HDU 2092

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2092)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2092)

## Solution

This problem is a mathematical problem. We can use the Vieta's formulas to solve the problem.

According to the Vieta's formulas, if a quadratic equation which looks like $x^2-n x+m=0$ has two solutions of $x$, which may be $x_1$ and $x_2$, we'll have $\begin{cases}x_1+x_2=n\\x_1x_2=m\end{cases}$, which are $n$ and $m$ given in the problem. According to the quadratic formula, a quadratic formula which looks like $ax^2+b x+c=0$ have two solutions of $x$, they are $-b\plusmn\sqrt{b^2-4a c}\over2a$. That means a quadratic equation $x^2-n x+m=0$ with two solutions of $x$ will have the solutions $n\plusmn\sqrt{n^2-4m}\over2$. So we can know that if and only if $\sqrt{n^2-4m}$ is an integer will the two solutions be integers too. Why? If $n$ is a odd number, $n^2-4m$ and $\sqrt{n^2-4m}$ must be odd numbers too. So $n\plusmn\sqrt{n^2-4m}$ must be even numbers, and the solutions are integers. If $n$ is an even number, then $n^2-4m$, $\sqrt{n^2-4m}$ and $n\plusmn\sqrt{n^2-4m}$ must be even numbers too. So the solutions are also integers. In summary, we can solve the problem by judging if $n^2-4m$ is a square of an integer.

## Code

- [Solution](HDU.2092.0.cpp)
