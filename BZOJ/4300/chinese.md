# BZOJ 4300

## 描述

- [Virtual Judge](https://vjudge.net/problem/HYSBZ-4300)
- [黑暗爆炸OJ](https://darkbzoj.tk/problem/4300)

## 解法

要解本题，使用 <abbr title="动态规划">dp</abbr> 即可。

设 $f_i$ 为最后一项的二进制第 $i$ 位不为零的最长子序列的长度。对于每个 $a_i$，我们可以找到一个最长的以其结尾的子序列并用其更新 dp 数组 $f$。而答案即为 $f_i$ 的最大值。

## 代码

- [正解](BZOJ.4300.0.cpp)
