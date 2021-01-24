# BZOJ 2818

## 描述

- [Virtual Judge](https://vjudge.net/problem/HYSBZ-2818)
- [黑暗爆炸OJ](https://darkbzoj.tk/problem/2818)

## 解法

本题为数论题。要想解出这题，我们首先要了解狄利克雷卷积与莫比乌斯反演。

首先，我们可以枚举所有可能为最大公约数的质数，因此答案为

$$\sum_{p:\text{prime}}\sum_{x=1}^n\sum_{y=1}^n{[\gcd(x,y)=p]}$$

假设 $x=ip$、$y=jp$（否则其对答案没有贡献），则我们有

$$\begin{aligned}
 &\sum_{x=1}^n\sum_{y=1}^n{[\gcd(x,y)=p]}\\
=&\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}{[\gcd(i,j)=1]}\\
=&\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}{\operatorname{e}(\gcd(i,j))}
\end{aligned}$$

现在使用莫比乌斯反演。由 $\operatorname{e}=\operatorname{\mu}*\operatorname{1}$ 得

$${\operatorname{e}(\gcd(i,j))}=\sum_{d|\gcd(i,j)}\left(\operatorname{\mu}(d)\operatorname{1}\left(\frac{\gcd(i,j)}{d}\right)\right)=\sum_{d|\gcd(i,j)}\operatorname{\mu}(d)$$

然后我们调换求和顺序，把 $d$ 放到 $p$ 之后，则

$$\begin{aligned}
 &\sum_{p:\text{prime}}\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}\sum_{d|\gcd(i,j)}\operatorname{\mu}(d)\\
=&\sum_{p:\text{prime}}\sum_{d=1}^{\left\lfloor n\over p\right\rfloor}{\left(\operatorname{\mu}(d)\sum_{i=1}^{\left\lfloor n\over p\right\rfloor}{[d|i]}\sum_{j=1}^{\left\lfloor n\over p\right\rfloor}{[d|j]}\right)}\\
=&\sum_{p:\text{prime}}\sum_{d=1}^{\left\lfloor n\over p\right\rfloor}{\left(\operatorname{\mu}(d)\left\lfloor\left\lfloor n\over p\right\rfloor\over d\right\rfloor^2\right)}\\
=&\sum_{p:\text{prime}}\sum_{d=1}^{\left\lfloor n\over p\right\rfloor}{\left(\operatorname{\mu}(d)\left\lfloor n\over pd\right\rfloor^2\right)}
\end{aligned}$$

现在我们可以通过枚举 $p$ 和 $\left\lfloor n\over pd\right\rfloor$ 来在 $\operatorname{O}(\operatorname{\pi}(n)\sqrt{n})$ 内求解，其中 $\operatorname{\pi}(n)$ 为 $[1,n]$ 内的质数个数，另需 $\operatorname{O}(n)$ 来预处理质数与 $\operatorname{\mu}(d)$ 的前缀和。根据素数定理，$\operatorname{O}(\operatorname{\pi}(n))=\operatorname{O}\left(n\over\ln{n}\right)$。因此总时间复杂度约为 $\operatorname{O}\left(n\sqrt{n}\over\ln{n}\right)$，刚刚好能卡进10秒内。

## 代码

- [正解](BZOJ.2818.0.cpp)
