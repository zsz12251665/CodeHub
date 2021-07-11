# NOIP 2014S2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1351)
- [Vijos](https://www.vijos.org/p/1906)

## Solution

I suppose that this is a mathematical problem. Some people said in can also be solved with <abbr title="dynamic programming">dp</abbr> algorithm. But here I will just show the mathematical solution.

From the definition, we know that the points which made up of a united weight should be next to a common point. So we can enumerate every point and the points besides them to make the united weight. However, this solution is absolutely unacceptable because the time complexity will be about $\operatorname{O}(n^2)$ or close to $\operatorname{O}(n^3)$ when there are two layers of loops while enumerating the common point.

Then I think of another way. For a set of $\{a_k|k\isin[1,n],k\isin\mathbb{N}\}$, the sum of the product of every pair of $(a_i,a_j)$ equals $\left(\sum_{k=1}^n a_k\right)^2$. This includes some situations look like $a_i^2$, so we can remove it by subtracting $\sum_{k=1}^n a_k^2$. That means while calculating the sum of all the united weights, we only need to enumerate the points beside the common point once. At the same time, we can find the maximum united weight by finding the maximum two weights. That means we can enumerate the common points with an $\operatorname{O}(d_i)$ process for each points, with which $d_i$ means the degree of the point $i$. So the total time complexity will be $\operatorname{O}(n)$ because there are $(n-1)$ edges so the total degree will be $2(n-1)$.

P. S. In fact, you don't need to divide 2 when collecting the sum of the united weights. Because when you collect the united weight of the points pair $(u,v)$, you collect $(v,u)$ at the same time by multiply the united weight with 2.

## Code

- [Solution](NOIP.2014S2.0.cpp)
