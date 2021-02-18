# POJ 3984

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3984)
- [POJ](http://poj.org/problem?id=3984)

## Solution

This Problem is easy to solve because of the <data value="c{5}o{&times;}c{5}"></data> matrix. Here is a way using <abbr title="Breadth-First Search">BFS</abbr>.

We can make a parent array of every point who records its parent on the BFS tree from <data value="o{(}c{0}o{,}c{0}o{)}"></data>. Then we can easily find the path from <data value="o{(}c{4}o{,}c{4}o{)}"></data> to <data value="o{(}c{0}o{,}c{0}o{)}"></data> with the tree, just asking his ancestors.

P. S. It seems that the <abbr title="Free Pascal Compiler">FPC</abbr> of POJ has broken since last month because all attempts after August 26, 2017 got the result <abbr title="Compile Error">CE</abbr> on Virtual Judge. I'm sorry that the Pascal code could not be verified right now, just like <a href="/codes/?oj=POJ&pid=1007">POJ 1007</a> and <a href="/codes/?oj=POJ&pid=3292">POJ 3292</a>.

P. P. S. On 15:22, 10 November, 2017, the Pascal Code was submitted again and now it is proofed that the code is correct.

## Code

- [Solution](POJ.3984.0.cpp)
