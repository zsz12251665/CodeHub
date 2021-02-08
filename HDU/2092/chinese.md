# HDU 2092

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2092)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2092)

## 解法

这道题是一道数学题，我们可以用韦达定理来解决。

根据韦达定理，若一个形如 $x^2-n x+m=0$ 的二次方程有两个 $x$ 的解 $x_1$ 和 $x_2$，则有 $\begin{cases}x_1+x_2=n\\x_1x_2=m\end{cases}$，就是这道题给定的 $n$ 和 $m$。根据二次方程求根公式，若一个形如 $ax^2+b x+c=0$ 的二次方程有两个 $x$ 的根，其为$-b\plusmn\sqrt{b^2-4a c}\over2a$。也就是说一个有两个 $x$ 的根的，形如 $x^2-n x+m=0$ 的二次方程的解为 $n\plusmn\sqrt{n^2-4m}\over2$。因此问哦们知道当且仅当 $\sqrt{n^2-4m}$ 是整数时两个根也均为整数。为什么？若 $n$ 是奇数，$n^2-4m$ 和 $\sqrt{n^2-4m}$ 肯定也是奇数。所以 $n\plusmn\sqrt{n^2-4m}$ 比为偶数，解自然是整数。若 $n$ 为偶数，则 $n^2-4m$、$\sqrt{n^2-4m}$ 和 $n\plusmn\sqrt{n^2-4m}$ 都一定是偶数。因此解也肯定是整数。因此我们直接判断 $n^2-4m$ 是否为完全平方数即可解决此题。

## 代码

- [正解](HDU.2092.0.cpp)
