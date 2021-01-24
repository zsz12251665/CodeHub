# HDU 1213

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-1213)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=1213)

## 解法

This problem required a union find set. 

The union find set is a data structure which can merge two disjoint sets and determine if two elements are in the same set. Each element has a pointer, which is its "father". So you can find the root of the set in <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. At the same time, because it is a set, so we can put the pointer to the root after finding the root. It can reduce the time when you find the root of this element again. The time complexity of the merging is <data value="o{O}o{(}c{1}o{)}"></data>. You just need to set the pointer of the root of the first set to the root of the second set. 

After merging, we just need to scan all the elements and count the number of the roots to solve the problem. 

## 代码

- [正解](HDU.1213.0.cpp)
