# POJ 3070

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3070)
- [POJ](http://poj.org/problem?id=3070)

## Solution

The method of calculating the $n$-th number of the Fibonacci integer sequence has been given in the description of the problem. It is the power of matrix. But since $0\le n\le10^9$, we need a fast power of matrix, which is like the fast power of integer of which time complexity is $\operatorname{O}(\log n)$.

For the beginners who don't know how the multiplication of matrix is calculated, here it is. For two matrices $\begin{bmatrix}a_1&a_2\\a_3&a_4\end{bmatrix}$ and $\begin{bmatrix}b_1&b_2\\b_3&b_4\end{bmatrix}$, the product is $\begin{bmatrix}a_1b_1+a_2b_3&a_1b_2+a_2b_4\\a_3b_1+a_4b_3&a_3b_2+a_4b_4\end{bmatrix}$. Although it doesn't have the commutative property, the multiplication of matrix has the associative property, which means $\left(\begin{bmatrix}a_1&a_2\\a_3&a_4\end{bmatrix}\begin{bmatrix}b_1&b_2\\b_3&b_4\end{bmatrix}\right)\begin{bmatrix}c_1&c_2\\c_3&c_4\end{bmatrix}=\begin{bmatrix}a_1&a_2\\a_3&a_4\end{bmatrix}\left(\begin{bmatrix}b_1&b_2\\b_3&b_4\end{bmatrix}\begin{bmatrix}c_1&c_2\\c_3&c_4\end{bmatrix}\right)$. So we can make the fast power of matrix as same as the fast power of integer which transforms the index into binary.

## Code

- [Solution](POJ.3070.0.cpp)
