# NOIP 2017S1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P3951)
- [Vijos](https://www.vijos.org/p/2028)

## Solution

I had no idea to solve a pair of $(a,b)$ while they are as large as $10^9$ with <abbr title="the extended Greatest Common Division algorithm">exGCD</abbr>!

After getting out of the examination hall, someone told me that the correct answer is $(a b-a-b)$. How can the problem be a mathematical one with an $\operatorname{O}(1)$ time complexity? Oh Jesus it's just the first problem! It should be an easy one solved by simulation or <abbr title="Brute Force">BF</abbr>! But complaining can change nothing. In the following I will prove why $(a b-a-b)$ is the correct answer.

We will use contradiction to prove it. If $(a b-a-b)$ is able to be formed by $a$ and $b$, then we will have $\exists n,m\isin\mathbb{N},a n+b m=a b-a-b$. Then it will be transformed into $a b=a(n+1)+b(m+1)$. So that we'll have $\begin{cases}a(b-n-1)=b(m+1)\\b(a-m-1)=a(n+1)\end{cases}$, which means $\begin{cases}a|b(m+1)\\b|a(n+1)\end{cases}$. However, $a$ and $b$ are coprime, so there must be $\begin{cases}a|(m+1)\\b|(n+1)\end{cases}$. Then we define $\begin{cases}ax=m+1\\by=n+1\end{cases}(x,y\isin\mathbb{N}_+)$ and then put it back to the equation $a b=a(n+1)+b(m+1)$, there will be $a b=a(n+1)+b(m+1)=a b y+b a x=a b(x+y)\hArr x+y=1$. Obviously that the sum of two positive integers cannot equal $1$, so the hypothesis is wrong and the proposition is proved.

## Code

- [Solution](NOIP.2017S1.0.cpp)
