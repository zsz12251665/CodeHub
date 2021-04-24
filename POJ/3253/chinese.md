# POJ 3253

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3253)
- [POJ](http://poj.org/problem?id=3253)

## 解法

本题形式上与 [NOIP 2004S2](/NOIP/2004S2/english.md) 完全一致。两题的思路和算法完全相同。唯一的区别就是数据范围，本题你需要使用 64 位整数。

我们在本题解法中使用了 `priority_queue`。这是一个 <abbr title="标准模板库">STL</abbr> 容器，工作方式与堆非常相似。但请注意它默认是大根堆。要将其转换成小根堆，你需要在声明时将 `less` 比较器换为 `greater` 比较器或者是手动重载元素类的 `operator<` 运算符函数。

## 代码

- [正解](POJ.3253.0.cpp)
