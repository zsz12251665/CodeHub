# CF 1325C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1325C)
- [Luogu](https://www.luogu.com.cn/problem/CF1325C)
- [Codeforces](https://codeforces.com/problemset/problem/1325/C)

## Solution

This problem is interesting. For a chain, no matter how you put these labels, the largest value among <data value="o{MEX}o{(}v{u}o{,}v{v}o{)}"></data> will be <data value="o{(}v{n}o{-}c{1}o{)}"></data>, which can be found at the route between two endpoints. Otherwise, there should be at least one node with its degree over than 3. And we can label 3 of the edges connected to it with 0, 1 and 2 so that the largest value among <data value="o{MEX}o{(}v{u}o{,}v{v}o{)}"></data> will be $2$ because no route can get through 0, 1 and 2 at the same time.

So the solution is to find the node with the maximum degree. If its node is less than 2, the tree is a chain and output the labels in any way. Otherwise find 3 edges connected to it and label them with 0, 1 and 2 and the rest of them in any order.

## Code

- [Solution](CF.1325C.0.cpp)
