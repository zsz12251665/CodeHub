# HDU 3038

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-3038)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=3038)

## 解法

This problem is solved in a clever way to use the union find set. Rather than each element, we maintain the relationship of the prefix sum so that the sum from the <data value="v{A}b{v{i}}"></data>-th one to the <data value="v{B}b{v{i}}"></data>-th one can be translated to the difference of the prefix sum to the <data value="o{(}v{A}b{v{i}}o{-}c{1}o{)}"></data>-th and the prefix sum to the <data value="v{B}}b{v{i}}"></data>-th. Now you can use the weighed union find set to maintain the prefix sums. 

P. S. I still cannot understand why the Pascal Code got <abbr title="Wrong Answer">WA</abbr>. I use the same algorithm as the C++ one! 

## 代码

- [正解](HDU.3038.0.cpp)
