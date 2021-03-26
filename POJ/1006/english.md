# POJ 1006

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-1006)
- [POJ](http://poj.org/problem?id=1006)

## Solution

To solve this problem, you need to know a little about the Chinese remainder theorem. It explains how to solve congruent equations.

First of all, we need to find out the number-theoretic reciprocal of $23$, $28$ and $33$ with respect to the product of the other two respectively. They are $6$, $19$ and $2$. And then according to the Chinese remainder theorem, the day which is $(6\times28\times33)p+(23\times19\times33)e+(23\times28\times2)i$ days from the first day of the year must be a triple peak occurred day. And then we deduct the days that had passed, and take the remainder which is divided with $23\times28\times33$, we'll get the next triple peak occurred day. So keep it in one, the answer is $(5544p+14421e+1299i-d+21252-1)\bmod21252+1$ (to add a $21252$ is to keep the answer positive, to minus $1$ and then plus $1$ is to keep the answer in $[1,21252]$).

If you have problem with some the number-theoretic reciprocal, here may give you some reference: To a pair of $(a,m)$ ($a,m\isin\mathbb{N}_+$), if there is an integer $n$ which satisfies $a n\equiv1\pmod{m}$, we call $n$ the number-theoretic reciprocal of $(a,m)$. For example, $6\times28\times33\equiv1\pmod{23}$, so $6$ is the number-theoretic reciprocal of $(28\times33,23)$.

## Code

- [Solution](POJ.1006.0.cpp)
