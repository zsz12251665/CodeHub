# POJ 3233

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3233)
- [POJ](http://poj.org/problem?id=3233)

## Solution

This problem is about the matrix multiplication. For two $n\times n$ matrices $A$ and $B$, their product $P$ can be calculated according to $P_{i,j}=\sum_{c=1}^nA_{i,c}B_{c_j}$. For example, the product of two matrices $\begin{bmatrix}a_{1,1}&a_{1,2}\\a_{2,1}&a_{2,2}\end{bmatrix}$ and $\begin{bmatrix}b_{1,1}&b_{1,2}\\b_{2,1}&b_{2,2}\end{bmatrix}$ is $\begin{bmatrix}a_{1,1}b_{1,1}+a_{1,2}b_{2,1}&a_{1,1}b_{1,2}+a_{1,2}b_{2,2}\\a_{2,1}b_{1,1}+a_{2,2}b_{2,1}&a_{2,1}b_{1,2}+a_{2,2}b_{2,2}\end{bmatrix}$. We can calculate the product of two matrices in $\operatorname{O}(n^3)$.

But how should we calculate their sum? As we all know, the matrix multiplication has the associative property, so we'll have $S=\sum_{i=1}^k A^i=\frac{A^{i+1}-I}{A-I}-I$, which $I$ is the identity matrix. However, it is difficult to calculate the matrix division. So we need to think another way.

Assume there are two matrix sequences $P_t=A^{2^t}$ and $T_t=\sum_{i=1}^{2^t}A^i$. They can be calculated recursively by $P_{t+1}=P_tP_t$ and $T_{t+1}=T_t+P_tT_t$. Then we can convert $k$ into binary and add the sum according to the binary. Assume the $t$-th rightmost bit of $k$ is $k_t$, then $S=\sum_{i=1}^k A^i=\sum_{t=1}^\infty k_tA^{k\mod 2^t}T_t$. That is, for each time we add the next $2^t$ $A^i$s into the sum if $k_t=1$. $A^{k\mod 2^t}$ (denoted by $M_t$) can be calculated by fast power of matrix, which can be calculated with $S$ by $M_{t+1}=M_tA^{k_t2^t}=M_tP_t^{k_t}=\begin{cases}M_t&(k_t=0)\\M_tP_t&(k_t=1)\end{cases}$. So the answer is $S=\sum_{t=1}^\infty k_tM_tT_t$.

## Code

- [Solution](POJ.3233.0.cpp)
