# POJ 2115

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-2115)
- [POJ](http://poj.org/problem?id=2115)

## 解法

本题是 <abbr title="拓展欧几里得算法">exGCD</abbr> 的一个回顾。

正如我们在 [NOIP 2012S4](/NOIP/2012S4/english.md) 提到的，exGCD 是用来找一对 $(x,y)$ 以满足 $a x+b y=\gcd(a,b)$。它之所以可用 exGCD 来计算，是因为 $(a\bmod b)x+b\left(\left\lfloor a\over b\right\rfloor x+y\right)=b\left\lfloor a\over b\right\rfloor x+(a\bmod b)x+by=a x+b y=\gcd(a,b)=\gcd(a\bmod b,b)$。

现在让我们专注于本题。题目要计算 $a+c x\equiv b\pmod{2^k}$ 中的 $x$。该方程等价于 $c x\equiv b-a\pmod{2^k}$ 和 $c x+2^ky=b-a$。因此 $x$ 是否存在依赖于是否有 $\gcd(c,2^k)|(b-a)$。下一步则是求 $c^{-1}\pmod{2^k}$，然后问题就解决了。

顺便说一句，你可能注意到了我们要对 $2^k\over\gcd(c,2^k)$ 而不是 $2^k$ 取模。这是因为我们需要除以 $\gcd(c,2^k)$ 以保证 $c^{-1}\pmod{2^k}$ 存在。

## 代码

- [正解](POJ.2115.0.cpp)
