# POJ 3253

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3253)
- [POJ](http://poj.org/problem?id=3253)

## Solution

The problem equals to [NOIP 2004S2](/NOIP/2004S2/english.md) in form. The idea and the algorithm are the same. The only difference is the data range, which you might need 64-bit integers in this problem.

We are introducing `priority_queue` in this solution. It is an <abbr title="Standard Template Library">STL</abbr> container which functions very similar to the heap. But pay attention that it is the max heap by default. To switch it into a min heap, you need to replace `less` comparer with `greater` comparer in the declaration or manually override the `operator<` function of the element class.

## Code

- [Solution](POJ.3253.0.cpp)
