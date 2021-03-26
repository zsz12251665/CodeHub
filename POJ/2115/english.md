# POJ 2115

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2115)
- [POJ](http://poj.org/problem?id=2115)

## Solution

Here is a review of <abbr title="the extended Greatest Common Division algorithm">exGCD</abbr>.

As we've mentioned in [NOIP 2012S4](/NOIP/2012S4/english.md), exGCD is used to find a pair of $(x,y)$ which satisfies $a x+b y=\gcd(a,b)$. It can be calculated with exGCD because $(a\bmod b)x+b\left(\left\lfloor a\over b\right\rfloor x+y\right)=b\left\lfloor a\over b\right\rfloor x+(a\bmod b)x+by=a x+b y=\gcd(a,b)=\gcd(a\bmod b,b)$.

Now we focus on the problem. The problem is to calculate $x$ in formula $a+c x\equiv b\pmod{2^k}$, which equals to $c x\equiv b-a\pmod{2^k}$ and $c x+2^ky=b-a$. So whether $x$ exists depends on whether $\gcd(c,2^k)|(b-a)$. Then the next step is to calculate $c^{-1}\pmod{2^k}$ and the problem is solved.

By the way, you may probably notice that we need to module $2^k\over\gcd(c,2^k)$ but not $2^k$. This is because we've divided $\gcd(c,2^k)$ to make sure $c^{-1}\pmod{2^k}$ exists.

## Code

- [Solution](POJ.2115.0.cpp)
