# POJ 3233

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3233)
- [POJ](http://poj.org/problem?id=3233)

## 解法

本题和矩阵乘法有关。对于两个 $n\times n$ 的矩阵 $A$ 和 $B$，它们的乘积 $P$ 可通过 $P_{i,j}=\sum_{c=1}^nA_{i,c}B_{c_j}$ 计算得到。比如，$\begin{bmatrix}a_{1,1}&a_{1,2}\\a_{2,1}&a_{2,2}\end{bmatrix}$ 和 $\begin{bmatrix}b_{1,1}&b_{1,2}\\b_{2,1}&b_{2,2}\end{bmatrix}$ 的乘积是 $\begin{bmatrix}a_{1,1}b_{1,1}+a_{1,2}b_{2,1}&a_{1,1}b_{1,2}+a_{1,2}b_{2,2}\\a_{2,1}b_{1,1}+a_{2,2}b_{2,1}&a_{2,1}b_{1,2}+a_{2,2}b_{2,2}\end{bmatrix}$。矩阵乘法可以在 $\operatorname{O}(n^3)$ 内计算出结果。

但我们该如何求它们的和呢？众所周知，矩阵乘法有结合律，所以我们可取 $S=\sum_{i=1}^k A^i=\frac{A^{i+1}-I}{A-I}-I$，其中 $I$ 是单位矩阵。但是，矩阵的除法很难计算，因此我们得尝试使用别的方法。

设两个矩阵数列 $P_t=A^{2^t}$ 和 $T_t=\sum_{i=1}^{2^t}A^i$。他们的递推式分别为 $P_{t+1}=P_tP_t$ 和 $T_{t+1}=T_t+P_tT_t$。那么我们可以将 $k$ 转化为二进制并依此求出幂次和。假设 $k$ 的右起第 $t$ 位为 $k_t$，则 $S=\sum_{i=1}^k A^i=\sum_{t=1}^\infty k_tA^{k\mod 2^t}T_t$。也就是说，每次当 $k_t=1$时，我们把接下来的 $2^t$ 个 $A^i$ 加入累计和中。$A^{k\mod 2^t}$（记为 $M_t$）可通过快速幂计算，甚至可以通过 $M_{t+1}=M_tA^{k_t2^t}=M_tP_t^{k_t}=\begin{cases}M_t&(k_t=0)\\M_tP_t&(k_t=1)\end{cases}$ 和 $S$一并计算。因此答案为 $S=\sum_{t=1}^\infty k_tM_tT_t$。

## 代码

- [正解](POJ.3233.0.cpp)
