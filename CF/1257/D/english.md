# CF 1257D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1257D)
- [Luogu](https://www.luogu.com.cn/problem/CF1257D)
- [Codeforces](https://codeforces.com/problemset/problem/1257/D)

## Solution

Since the data range can come to <data value="c{2}o{&times;}c{10}p{c{5}}"></data>, an <data value="o{O}o{(}v{n}o{}v{m}o{)}"></data> algorithm will not be accepted. But you may find some tips when choosing heroes: If I have a hero with more power or more endurance, there should be no reason choosing the other ones. So we can sort the heroes and remove the useless ones to make sure the sequence of the power of the heroes is strictly decreasing but the sequence of the endurance is strictly increasing. That means if the previous hero's endurance can bring him to a certain monster, the following one's endurance will not be a problem too. If the previous hero's power is not enough, the following ones cannot make any progress either. So the solution is to try heroes one by one. If someone's endurance is not enough, try the next one. But if the power is not enough, no one could make a step further today.

## Code

- [Solution](CF.1257D.0.cpp)
