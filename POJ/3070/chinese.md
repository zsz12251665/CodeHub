# POJ 3070

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3070)
- [POJ](http://poj.org/problem?id=3070)

## 解法

计算第 $n$ 个斐波那契数的方法题目描述中已经给出，一个是矩阵的幂。鉴于 $0\le n\le10^9$，我们需要使用与整数快速幂类似的矩阵快速幂将时间复杂度压缩到 $\operatorname{O}(\log n)$。

对于不知道如何计算矩阵的幂的新手，这里进行一些说明。对于两个矩阵 $\begin{bmatrix}a_1&a_2\\a_3&a_4\end{bmatrix}$ 和 $\begin{bmatrix}b_1&b_2\\b_3&b_4\end{bmatrix}$，它们的乘积是 $\begin{bmatrix}a_1b_1+a_2b_3&a_1b_2+a_2b_4\\a_3b_1+a_4b_3&a_3b_2+a_4b_4\end{bmatrix}$。尽管其不遵守交换律，但矩阵乘法有结合律，即 $\left(\begin{bmatrix}a_1&a_2\\a_3&a_4\end{bmatrix}\begin{bmatrix}b_1&b_2\\b_3&b_4\end{bmatrix}\right)\begin{bmatrix}c_1&c_2\\c_3&c_4\end{bmatrix}=\begin{bmatrix}a_1&a_2\\a_3&a_4\end{bmatrix}\left(\begin{bmatrix}b_1&b_2\\b_3&b_4\end{bmatrix}\begin{bmatrix}c_1&c_2\\c_3&c_4\end{bmatrix}\right)$。因此我们可以把指数转换成二进制，以与整数快速幂的相同方式进行矩阵快速幂。

## 代码

- [正解](POJ.3070.0.cpp)
