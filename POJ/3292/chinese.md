# POJ 3292

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3292)
- [POJ](http://poj.org/problem?id=3292)

## 解法

本题是一道与素数相关的题目。首先，我尝试了埃氏筛，一种时间复杂度为 $\operatorname{O}(n\log^2{n})$ 的高效素数筛。在读入一个 $n$ 后，尝试每一对 H 素数去获取之。然而，就算换成 $\operatorname{O}(n)$ 的欧拉筛，这个做法还是不够快。

之后，我意识到既然我能预处理所有 H 素数，为什么不能一并预处理 H 半素数呢？这就是正解！

## 代码

- [正解](POJ.3292.0.cpp)
