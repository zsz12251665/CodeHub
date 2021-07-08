# POJ 2406

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-2406)
- [POJ](http://poj.org/problem?id=2406)

## 解法

让我们记字符串的前 $i$ 个字符为 $p_i$。如果 $p_i$ 是字符串的一个周期，那么必然有 $L\equiv0\pmod i$，其中 $L$ 是字符串的长度。因此我们可以枚举周期长度 $i$ 并检查 $p_i$ 是否是字符串的一个周期。时间复杂度为 $\operatorname{O}(L\operatorname{d}(L))$，其中 $\operatorname{d}(n)$ 表示 $n$ 的因数个数。

顺便说一下，解题时扫描字符串的时间并不会有 $L$ 那么大。当你发现一个前缀不是周期时，你会立刻停止扫描，而不是一直扫描到字符串末尾。

## 代码

- [正解](POJ.2406.0.cpp)
