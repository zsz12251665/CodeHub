# HDU 2547

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2547)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2547)

## 解法

与 [HDU 2548](/HDU/2548/chinese.md) 类似，这道题也是一道数学题。$\operatorname{f}(x,y,m,n)=\sqrt{x^2+y^2+m^2+n^2-2m x-2n y}=\sqrt{(x-m)^2+(y-n)^2}$，即 $(x,y)$ 与 $(m,n)$ 的距离。当伤害最小时，距离之和也最小。其值应等于 $(a,b)$ 和 $(c,d)$ 之间的距离，即 $\sqrt{(a-c)^2+(b-d)^2}$。

## 代码

- [正解](HDU.2547.0.cpp)
