# POJ 2823

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2823)
- [POJ](http://poj.org/problem?id=2823)

## Solution

The problem requires us to maintain a monotonous queue. The elements in monotonous queue are not only monotonous in values (in ascending or descending order), but also monotonous in indexes (in ascending order only). When we add a new element and move the window forward, we can pop the elements in the front that has got out of the range as well as the elements in the end to keep the queue monotonous. The head element in the monotonous queue will always be the minimum (in ascending order) or the maximum (in descending order) of the window.

## Code

- [Solution](POJ.2823.0.cpp)
