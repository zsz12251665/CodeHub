# CF 1305E

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1305E)
- [Luogu](https://www.luogu.com.cn/problem/CF1305E)
- [Codeforces](https://codeforces.com/problemset/problem/1305/E)

## Solution

First of all, let's find our when there is no solution. When <data value="v{a}b{v{i}}o{=}v{i}"></data>, we should probably be able to maximum the number of triples. And how many triples can we found? For each $k$, there can be <data value="o{&lfloor;}f{v{k}o{-}c{1}l{}c{2}}o{&rfloor;}"></data> pairs of <data value="o{(}v{i}o{,}v{j}o{)}"></data> which <data value="v{i}o{&lt;}v{j}"></data> and <data value="v{i}o{+}v{j}o{=}v{k}"></data>. So there can be <data value="o{&sum;}i{v{n}l{}v{k}o{=}c{1]}}o{&lfloor;}f{v{k}o{-}c{1}l{}c{2}}o{&rfloor;}o{=}o{&lfloor;}f{v{n}l{}c{2}}o{&rfloor;}o{}o{(}o{&lfloor;}f{v{n}l{}c{2}}o{&rfloor;}o{-}c{1}o{)}o{+}o{&lfloor;}f{v{n}l{}c{2}}o{&rfloor;}o{}o{(}v{n}o{mod}c{2}o{)}"></data> triples at most.

So here is an idea, we start from adding consecutive integers from $1$. And when we found the remain $m$ is not enough to add a new consecutive integer, add something else instead and add the rest if <data value="v{a}b{v{i}}"></data> very large to make it impossible to form a triple. But is that possible? In fact, if you have a sequence of consecutive integers from $1$ to $i$, adding an <data value="o{(}v{i}o{+}c{1}o{)}"></data> can get you <data value="o{&lfloor;}f{v{i}l{}c{2}}o{&rfloor;}"></data> new triples. However, adding an <data value="o{(}v{i}o{+}c{3}o{)}"></data> instead can get you only <data value="o{(}o{&lfloor;}f{v{i}l{}c{2}}o{&rfloor;}o{-}c{1}o{)}"></data> new triple. Or by adding an <data value="o{(}v{i}o{+}c{2}o{}v{j}o{+}c{1}o{)}"></data> which <data value="v{j}o{&le;}o{&lfloor;}f{v{i}l{}c{2}}o{&rfloor;}"></data> you can get only <data value="o{(}o{&lfloor;}f{v{i}l{}c{2}}o{&rfloor;}o{-}v{j}o{)}"></data> new triples. And as the <data value="c{!}o{&le;}v{a}b{v{i}}o{&le;}c{10}p{c{9}}"></data>, you can get no new triples by adding some large integers close to the upper limits but have a gap for at least $10000$.

## Code

- [Solution](CF.1305E.0.cpp)
