# HDU 3658

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-3658)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=3658)

## 解法

在这道题中，我们将提及如何使用矩阵的幂来加速<abbr title="动态规划">dp</abbr>。

dp矩阵形如 $f_{i,j,c}$，表示前 $i$ 个字母中，以 $j$ 作为最后一个字母的单词数量（$c$ 表示是否存在一对相邻字母之差恰为32）。现在我们可以写出状态转移方程：

- $f_{i,j,0}=\sum_{k=j-31}^{k+31}f_{i-1,k,0}$
- $f_{i,j,1}=f_{i-1,j\plusmn32,0}+\sum_{k=j-32}^{k+32}f_{i-1,k,1}$

如果我们采用滚动数组，将 `'Z'` 和 `'a'` 之差设为1，并将 $j$ 和 $c$ 组合成 $52c+j$，则有下式：

- $f^*_j=\sum_{k=j-25}^{k+25}f_k$
- $f^*_{j+52}=f_{j\plusmn26}+\sum_{k=j-26}^{k+26}f_{k+52}$

显然，每次转移需要 $\operatorname{O}(2\times52)$ 的时间。尽管总时间复杂度仅为 $\operatorname{O}(m)$，常数和多组样例还是会把我们卡掉。因此我们需要矩阵的幂来加速运算。但要怎么做呢？

我们可以构造一个转移矩阵。对于一个转移矩阵 $M$，$M_{x,y}$ 是 $f_x$ 中 $f_y$ 的系数。以斐波那契数列为例。转移矩阵为 $\begin{bmatrix}1&1\\1&0\end{bmatrix}$。此处 $f_{i,0}$ 表示 $F_i$，$f_{i,1}$ 表示 $F_{i-1}$。由转移矩阵可得状态转移方程为

$$\begin{bmatrix}F_{i+1}\\F_i\end{bmatrix}=\begin{bmatrix}f_{i+1,0}\\f_{i+1,1}\end{bmatrix}=\begin{bmatrix}1&1\\1&0\end{bmatrix}\begin{bmatrix}f_{i,0}\\f_{i,1}\end{bmatrix}=\begin{bmatrix}f_{i,0}+f_{i,1}\\f_{i,0}\end{bmatrix}=\begin{bmatrix}F_i+F_{i-1}\\F_i\end{bmatrix}$$

在构造出转移矩阵后，我们可知，每将矩阵与状态数组成在一起，就完成了一次状态转移。我们只需重复 $m$ 次即可。由结合律得，我们可以通过仅需 $\operatorname{O}(\log m)$ 的矩阵快速幂来加速运算。

## 代码

- [正解](HDU.3658.0.cpp)
