# CF 950D

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-950D)
- [Luogu](https://www.luogu.com.cn/problem/CF950D)
- [Codeforces](https://codeforces.com/problemset/problem/950/D)

## Solution

Yesterday, I joined the 	<a target="_blank" href="https://codeforces.com/contest/950/">Codeforces Round #469 (Div. 2)</a>, which is my first Codeforces contest. Here are some of my solution.

When I saw the problem, I notice that <data value="c{1}o{&le;}v{n}o{&le;}c{10}p{18}"></data>. "It must be an <data value="o{O}o{(}v{q}o{}o{lg}v{n}o{)}"></data> problem." I thought, "or it can't be as large as <data value="c{10}p{18}"></data>." Of course we could not preprocess all $n$ numbers before we read the questions because we just had 2 seconds. Then I tried simulating the operations on my notebook. while simulating, I realized that the operations are retrospective. For example, if we wanted to know the second number in the array, we could ask ourselves what the <data value="o{(}v{n}o{+}c{1}o{)}"></data>-th number is. And if I wanted the $q$-th one, the answer would be the <data value="o{(}v{n}o{+}f{v{q}l{}c{2}}o{)}"></data>-th one. What's more, the time complexity of the algorithm is <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. So the problem is solved.

## Code

- [Solution](CF.950D.0.cpp)
