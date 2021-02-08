# HDU 1009

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-1009)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=1009)

## 解法

本题贪心即可。直接最大化每磅猫粮可交换的咖啡豆数量。首先，按照 $j_i\over f_i$ 排序。然后按顺序访问房间，拿走所有能拿的咖啡豆即可。

## 代码

- [正解](HDU.1009.0.cpp)
