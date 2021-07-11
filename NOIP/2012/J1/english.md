# NOIP 2012J1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1075)
- [Vijos](https://www.vijos.org/p/1786)

## Solution

This problem is very simple. You just need to find the small prime, and you'll get the big prime. So the solution will talk about how to check whether the integer is a prime.

We need to try all the integers from $2$ to $\left\lfloor\sqrt n\right\rfloor$. Why $\sqrt n$? That is because if there is a division $d$ which is bigger than $\sqrt n$, then $n\over d$ must be an integer, and it must be smaller than $\sqrt n$. If both $n\over d$ and $d$ are bigger than $\sqrt n$, $d\cdot\frac n d$, which equals $n$, must be bigger than $\left(\sqrt n\right)^2$, which equals $n$ too. That is impossible. So you can check whether the integer $n$ is a prime by trying all the integers from $2$ to $\left\lfloor\sqrt n\right\rfloor$.

P. S. In fact, we don't need to check whether the number is a prime. Because the problem have promised that $n$ will always be the product of two primes. So we just need to find the small number, and output their quotient.

## Code

- [Solution](NOIP.2012J1.0.cpp)
