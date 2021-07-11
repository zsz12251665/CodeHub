# CF 1313C2

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1313C2)
- [Luogu](https://www.luogu.com.cn/problem/CF1313C2)
- [Codeforces](https://codeforces.com/problemset/problem/1313/C2)

## Solution

Since <data value="v{n}o{&le;}c{500000}"></data> now, we cannot use the <data value="o{O}o{(}v{n}p{c{2}}o{)}"></data> algorithm in <a href="/codes/?oj=CF&pid=1313C1">CF 1313C1</a> or you will get a <abbr title="Time Limit Exceeded">TLE</abbr>.

We notice that the answer should have only one peak according to the requirement of the answer. So we can enumerate the peaks and make both sides monotonic and take the one with largest total number of floors. However, how to calculate the total number in at most <data value="o{O}o{(}v{n}o{}o{lg}v{n}o{)}"></data>. I thought out a way by using weighed segment tree with lazy tag to make it but I did not have enough time to finish it. After the contest, someone told me a better way. A monotonic stack can finish all of them in <data value="o{O}o{(}v{n}o{)}"></data>. Before you push another element to the stack, take all ones larger out, count the number of them and change their values to the same as you are going to push. Of course you don't need to push them in one by one, you should combine the elements with the same value. And you do it twice, one from front to back and the other one from back to front, so that you can tell the total numbers of floors.

## Code

- [Solution](CF.1313C2.0.cpp)
