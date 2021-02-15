# BZOJ 1197

## Description

- [Virtual Judge](https://vjudge.net/problem/HYSBZ-1197)
- [黑暗爆炸OJ](https://darkbzoj.tk/problem/1197)

## Solution

Let's write out the answer of every pair of $(n,m)$ to get a sheet like this:

| $(n,m)$ | $m=0$ | $m=1$ | $m=2$ | $m=3$ | $m=4$ | $m=5$ | $m=6$ | $m=7$ |
| :-----: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
|  $n=1$  |  $1$  |  $2$  |  $4$  |  $6$  |  $8$  | $10$  | $12$  | $14$  |
|  $n=2$  |  $1$  |  $2$  |  $4$  |  $8$  | $14$  | $22$  | $32$  | $44$  |
|  $n=3$  |  $1$  |  $2$  |  $4$  |  $8$  | $16$  | $30$  | $52$  | $84$  |

According to the data above, we can find some rules. First of all, the answer is always $1$ when $m=0$. Besides, if $n=1$ and $m>0$, the answer is $2m$. What's more, when $n>1$ and $m>0$, the answer equals to the sum of the one with $(n-1,m-1)$ and the one with $(n,m-1)$. And that's the solution!

## Code

- [Solution](BZOJ.1197.0.cpp)
