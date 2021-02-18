# POJ 2823

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2823)
- [POJ](http://poj.org/problem?id=2823)

## Solution

The problem requires a data structure called monotonous double-ended queue. The monotonous queue keeps the sequence of the maximum or minimum values of the array. That means they are not only monotonous in values, but also monotonous in indexes. When we move the window forward, we can pop the node on the head that has been got out of the range out, then pop out some nodes in the end to Pop out the nodes in the end to keep the queue monotonous and finally add the new node in. So the head node will be the maximum or the minimum value.

P. S. It is fantastic that the Pascal program can run faster then a C++ program. But in this problem, the Pascal Code won an <abbr title="Accepted">AC</abbr> when the C++ Code got an <abbr title="Time Limit Exceeded">TLE</abbr> unless you hand in the code by C++ but not G++.

## Code

- [Solution](POJ.2823.0.cpp)
