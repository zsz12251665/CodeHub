# CF 515D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-515D)
- [Luogu](https://www.luogu.com.cn/problem/CF515D)
- [Codeforces](https://codeforces.com/problemset/problem/515/D)

## Solution

To solve this problem, you have to notice that we are finding the <b>unique</b> solution. So in what situation will the solution be unique? For example, there is a point which has only one another point beside it. There should be only one way to fill this point. So we just find all the points beside which there are only one point and fill these points with tiles until there are no such kind of points left. If there are still empty points on the board. There should be no unique solution. Otherwise just outpuut the board because we have found the unique solution because all the processes are necessary.

P. S. Do not output the char array one by one in Pascal or you will be awarded an <abbr title="Idleness Limit Exceeded">ILE</abbr>.

## Code

- [Solution](CF.515D.0.cpp)
