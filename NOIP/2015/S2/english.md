# NOIP 2015S2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2661)
- [Vijos](https://www.vijos.org/p/1979)

## Solution

It is not difficult to find that we are required to find the minimum circle in the map that the outer degree of each point is 1. That makes any two circles cannot share an edge, or the shared edge will have a outer degree of 2. So we can search every point along the path until it come to a point we've visit, and we'll get the size of the round if we mark the time we arrive at the point.

We may also find that some points do not belong to any circles. And they may also reach some points that are visited. We can set an integer <data value="v{last}"></data> to record the finish time of the last search, if the time mark is early than <data value="v{last}"></data>, that means it was visited in a previous round and this path doesn't belong to any circles. That's how we solve the problem.

## Code

- [Solution](NOIP.2015S2.0.cpp)
