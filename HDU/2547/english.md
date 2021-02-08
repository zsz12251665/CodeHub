# HDU 2547

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2547)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2547)

## Solution

Similar to [HDU 2548](/HDU/2548/english.md), this problem is a mathematical problem too. $\operatorname{f}(x,y,m,n)=\sqrt{x^2+y^2+m^2+n^2-2m x-2n y}=\sqrt{(x-m)^2+(y-n)^2}$, which refers to the distance between $(x,y)$ and $(m,n)$. So when the hurt is reduced to minimum, the sum of the distances is reduced to minium too. It equals the distance between $(a,b)$ and $(c,d)$, which will be $\sqrt{(a-c)^2+(b-d)^2}$.

## Code

- [Solution](HDU.2547.0.cpp)
