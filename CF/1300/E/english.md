# CF 1300E

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1300E)
- [Luogu](https://www.luogu.com.cn/problem/CF1300E)
- [Codeforces](https://codeforces.com/problemset/problem/1300/E)

## Solution

To solve this problem, we should notice an interesting feature of the answer - the sequence should be increasing. This makes sense because otherwise we can average the decreasing part to reduce the front elements, which will make it lexicographically smaller.

So we can use a stack to maintain the increasing sequence. When you get the next element, check if it is larger than the top element in the stack. If not, take the top element out, average them and go back to the last step. Otherwise you push the element into the stack and continue. What's more, you don't need to copy the average value for several times. You just need to keep how many elements there should be. When you need to do another average with the last element, use the whole group instead because you will need to do so. Because there are only $n$ elements, the average operation will take place at most <data value="o{(}v{n}o{-}c{1}o{)}"></data> times.

P. S. I am terribly sorry for the poor efficiency of the Pascal Code. Even though the solution is <data value="o{O}o{(}v{n}o{)}"></data>, it still got an <abbr title="Time Limit Exceeded">TLE</abbr>.

## Code

- [Solution](CF.1300E.0.cpp)
