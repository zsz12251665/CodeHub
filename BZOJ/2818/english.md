# BZOJ 2818

## Description

- [Virtual Judge](https://vjudge.net/problem/HYSBZ-2818)
- [黑暗爆炸OJ](https://darkbzoj.tk/problem/2818)

## Solution

This problem is about number theory. To solve this problem, we are going to need some knowledge about Dirichlet convolution and Mobius inversion.

First of all, we can try enumerate the prime which is probably the <abbr title="Greatest Common Divider">GCD</abbr> of the numbers. So the answer is

$$\sum_{p:\text{prime}}\sum_{x=1}^n\sum_{y=1}^n{[\gcd(x,y)=p]}$$

We assume that $x=ip$, $y=jp$ (otherwise they will make no contribution to the answer), then we have

$$\begin{aligned}
 &\sum_{x=1}^n\sum_{y=1}^n{[\gcd(x,y)=p]}\\
=&\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}{[\gcd(i,j)=1]}\\
=&\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}{\operatorname{e}(\gcd(i,j))}
\end{aligned}$$

Now it is time to use the Mobius inversion. Because $\operatorname{e}=\operatorname{\mu}*\operatorname{1}$, so

$${\operatorname{e}(\gcd(i,j))}=\sum_{d|\gcd(i,j)}\left(\operatorname{\mu}(d)\operatorname{1}\left(\frac{\gcd(i,j)}{d}\right)\right)=\sum_{d|\gcd(i,j)}\operatorname{\mu}(d)$$

After that, we change the order of the sum, put $d$ after $p$, then

$$\begin{aligned}
 &\sum_{p:\text{prime}}\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}\sum_{d|\gcd(i,j)}\operatorname{\mu}(d)\\
=&\sum_{p:\text{prime}}\sum_{d=1}^{\left\lfloor n\over p\right\rfloor}{\left(\operatorname{\mu}(d)\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}{[d|i]}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}{[d|j]}\right)}\\
=&\sum_{p:\text{prime}}\sum_{d=1}^{\left\lfloor n\over p\right\rfloor}{\left(\operatorname{\mu}(d)\left\lfloor\left\lfloor n\over p\right\rfloor\over d\right\rfloor^2\right)}\\
=&\sum_{p:\text{prime}}\sum_{d=1}^{\left\lfloor n\over p\right\rfloor}{\left(\operatorname{\mu}(d)\left\lfloor n\over p d\right\rfloor^2\right)}
\end{aligned}$$

Now we can enumerate $p$ and $\left\lfloor n\over p d\right\rfloor$ to calculate the answer in $\operatorname{O}(\operatorname{\pi}(n)\sqrt{n})$, which $\operatorname{\pi}(n)$ is the number of prime numbers in $[1,n]$, with the $\operatorname{O}(n)$ preprocess of the prime numbers and the prefix sum of the $\operatorname{\mu}(d)$. According to the prime number theorem, $\operatorname{O}(\operatorname{\pi}(n))=\operatorname{O}\left(n\over\ln{n}\right)$, so the total time complexity should be around $\operatorname{O}\left(n\sqrt{n}\over\ln{n}\right)$, which just might be available due to the time limit of 10 seconds.

## Code

- [Solution](BZOJ.2818.0.cpp)
