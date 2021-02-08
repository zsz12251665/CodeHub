# HDU 2089

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2089)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2089)

## 解法

最初，我只是简单地搜索 $n$ 和 $m$ 之间的区间并统计个数。然而每次询问时搜索整个区间需要花很多时间。所以我们可以用一种类似前缀和的方式，预处理出一个吉利数数量的数组。每次读入一对 $(n,m)$ 后，我们只需要从 $0$ 到 $m$ 的幸运数数量中减去 $0$ 到 $n-1$的幸运数数量即可。虽然预处理要花上不少时间，它把单词询问时间从 $\operatorname{O}(n)$ 降至了 $\operatorname{O}(1)$。

## 代码

- [正解](HDU.2089.0.cpp)
