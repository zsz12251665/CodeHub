# CF 1305D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1305D)
- [Luogu](https://www.luogu.com.cn/problem/CF1305D)
- [Codeforces](https://codeforces.com/problemset/problem/1305/D)

## Solution

The interesting interactive problem has a number of solutions. My solution is to search the longest chain on the tree and send the request. If we find one of the endpoints is the <abbr title="Lowest Common Ancestor">LCA</abbr>, the root point must be it. Otherwise delete the subtree rooting at the points on the chain next to the LCA and go back to last step until there is only one point left. So finding the chain and deleting the subtree costs <data value="o{O}o{(}v{n}o{)}"></data>. A query can cause at least 2 points deleted. So there will be at most <data value="o{&lfloor;}f{v{n}l{}c{2}}o{&rfloor;}"></data> queries, just the same as the problem's limit. So the total time complexity will be <data value="o{O}o{(}v{n}p{c{2}}o{)}"></data>.

However, finding the longest chain and delete the subtree can be complex to code. So the official tutorial provides an easier solution. For a query, we choose any two leaf points. If the LCA is one of them, the root must be it too. Otherwise delete these two points and start a new query until only one point left. Similar to my solution, a query can delete exactly 2 points. So there will be at most <data value="o{&lfloor;}f{v{n}l{}c{2}}o{&rfloor;}"></data> queries, just the same as the problem's limit. The codes below also use this algorithm.

## Code

- [Solution](CF.1305D.0.cpp)
