# NOIP 2004J3

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1087)
- [Vijos](https://www.vijos.org/p/1114)

## Solution

You may have probably find it. Yes, the FBI tree is a full binary tree. Each leaf node is a char in the 01 string that if the char is 0, the leaf node is 'B' and if the char is 1, the leaf node is 'I'. What's more, if a non-leaf node has two children nodes which are all 'B', the node itself must be 'B'. Opposite, the node will be 'I' if his children node are all 'I'. However, if one of the child node is 'F' or they are 'B' and 'I', their parent node should be 'F'. Above all, the problem can be solved by a recursive algorithm.

## Code

- [Solution](NOIP.2004J3.0.cpp)
