# NOIP 2004J2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1086)
- [Vijos](https://www.vijos.org/p/1120)

## Solution

The algorithm of this problem is like simulation. First of all, we'll find the tree with most peanuts,  have the shortest way for a round trip. Then we'll check whether it is under the time constraint. If it isn't,just end the loop and print the answer, or pick the peanuts and find the new tree with most peanuts. And add it into the route, the length fo the route is the Manhattan distance between the last tree and the new one.

## Code

- [Solution](NOIP.2004J2.0.cpp)
