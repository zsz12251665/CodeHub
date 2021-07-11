# CF 1214D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1214D)
- [Luogu](https://www.luogu.com.cn/problem/CF1214D)
- [Codeforces](https://codeforces.com/problemset/problem/1214/D)

## Solution

It was really disappointing that I did not finish it during the contest because I was thinking about network flow until Wei Jiaxi provided me a hint.

Firstly, we could find out all the cells that a valid path may passed with searching twice, of which one from <data value="o{(}c{1}o{,}c{1}o{)}"></data> and the other from <data value="o{(}v{n}o{,}v{m}o{)}"></data>. Of course no cell needs to be turn into forest if the treasure is already unreachable. And It is also obvious that at most we only need to turn two cells into forest, which are the ones beside the start or the end. But in which situation can we make it with a single cells turned? Here comes the hint: we find the path at the right top and the the one at the left bottom. They are the border of the part of valid cells. If they have any cell in common, we could turn this cell into forest to prevent Vasya from reaching the treasure. If there is no common cell, a single change will not be able to block Vasya. So the key is to find the possible answers and when each of them applies.

## Code

- [Solution](CF.1214D.0.cpp)
