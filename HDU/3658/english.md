# HDU 3658

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-3658)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=3658)

## Solution

In this problem, we will talk about how to use the power of the matrix to speed up <abbr title="dynamic programming">dp</abbr> algorithm.

The dp array will be like $f_{i,j,c}$, which means the number of the words when we have chosen the first $i$ letters, with $j$ as the last one and $c$ which shows if there has been a difference of a pair of neighbored letters which is exactly 32. Now we can write down the state transition formulas:

- $f_{i,j,0}=\sum_{k=j-31}^{k+31}f_{i-1,k,0}$
- $f_{i,j,1}=f_{i-1,j\plusmn32,0}+\sum_{k=j-32}^{k+32}f_{i-1,k,1}$

If we roll the dp array, assume `'Z'` and `'a'` adjacent and then combine $j$ and $c$ as $52c+j$, we'll have these formulas:

- $f^*_j=\sum_{k=j-25}^{k+25}f_k$
- $f^*_{j+52}=f_{j\plusmn26}+\sum_{k=j-26}^{k+26}f_{k+52}$

Obviously, it took us $\operatorname{O}(2\times52)$ to finish a transition. Though the total time complexity is just $\operatorname{O}(m)$, the constant and the multitasks will not allow us to pass the problem. So we need the power of the matrix to speed up. But how can we do it?

We will construct a transition matrix. For a transition matrix $M$, $M_{x,y}$ is the coefficient of $f_y$ in $f_x$. Let's take Fibonacci sequence as an example. The transition matrix is $\begin{bmatrix}1&1\\1&0\end{bmatrix}$. Here, $f_{i,0}$ means $F_i$ while $f_{i,1}$ means $F_{i-1}$. So according to the transition matrix, the transition formulas are

$$\begin{bmatrix}F_{i+1}\\F_i\end{bmatrix}=\begin{bmatrix}f_{i+1,0}\\f_{i+1,1}\end{bmatrix}=\begin{bmatrix}1&1\\1&0\end{bmatrix}\begin{bmatrix}f_{i,0}\\f_{i,1}\end{bmatrix}=\begin{bmatrix}f_{i,0}+f_{i,1}\\f_{i,0}\end{bmatrix}=\begin{bmatrix}F_i+F_{i-1}\\F_i\end{bmatrix}$$

After constructing the transition matrix, we could know that if we multiply the matrix with the states array, we can finish the transition once. So we need to do it $m$ times. According to the associative property, we can use the power of the matrix, which is just $\operatorname{O}(\log m)$, to speed it up.

## Code

- [Solution](HDU.3658.0.cpp)
