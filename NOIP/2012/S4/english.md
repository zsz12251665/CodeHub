# NOIP 2012S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1082)
- [Vijos](https://www.vijos.org/p/1781)

## Solution

This problem is completely a mathematical problem that asked the number-theoretic reciprocal. We can calculate it with the extended Euclidean algorithm, which is also called <abbr title="the extended Greatest Common Division algorithm">exGCD</abbr>.

exGCD is an algorithm which is able to find a pair of $(x,y)$ that satisfies the B&eacute;zout's identity $a x+b y=\gcd(a,b)$. Obviously, we have $a x\equiv1\pmod b\hArr a x+ b y=1$. Because the problem promised that it must have an answer, so $\gcd(a,b)=1$, or there will be no number-theoretic reciprocal for this pair of $(a,b)$. So the equation is a B&eacute;zout's identity.

The standard Euclidean algorithm proceeds by a succession of Euclidean divisions whose quotients are not used, only the remainders are kept. However, for the extended algorithm, the successive quotients are used. We keep the quotients and put it back into the equation, we will have $x$ and $y$. But attention! $x$ and $y$ may be negative numbers. So you need to change it into the minimum positive number, that is in $[1,b-1]$.

## Code

- [Solution](NOIP.2012S4.0.cpp)
