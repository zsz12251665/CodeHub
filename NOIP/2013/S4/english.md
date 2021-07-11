# NOIP 2013S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1969)
- [Vijos](https://www.vijos.org/p/1844)

## Solution

NOIP 2013 is such a high qualified competition that no problems in Senior group can be solved with the simulation or enumeration. But this problem is not difficult as it is the first problem on Day 2.

Here are two pieces of important information:

- We don't need any more operations if this brick is not so tall as the one beside it because the previous operation can completely cover it.
- We'll need more operations to reach the height if this brick is taller than the one beside it, and the added number will be the height difference.

With these information, we can easily find out the solution, compare it with the last brick we read, and added the height difference onto our answer just like the code written.

## Code

- [Solution](NOIP.2013S4.0.cpp)
