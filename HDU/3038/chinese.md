# HDU 3038

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-3038)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=3038)

## 解法

这道题可以巧妙地用并查集解决。我们不维护每个元素，而是维护前缀和。这样就可以把第 $A_i$ 个到第 $B_i$ 个元素的和转换为前 $(A_i-1)$ 个元素的前缀和与前 $B_i$ 个元素的前缀和之差。现在你可以通过带权并查集来维护前缀和了。

## 代码

- [正解](HDU.3038.0.cpp)
