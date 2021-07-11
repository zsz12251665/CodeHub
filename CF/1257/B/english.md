# CF 1257B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1257B)
- [Luogu](https://www.luogu.com.cn/problem/CF1257B)
- [Codeforces](https://codeforces.com/problemset/problem/1257/B)

## Solution

This problem is much like a mathematic game. Here are some facts about the spells:

- When <data value="v{x}o{=}c{1}"></data>, no spell can be applied.
- <data value="o{3}"></data> can only be turned into <data value="o{2}"></data>, and <data value="o{2}"></data> can only be turned into <data value="o{3}"></data> or <data value="o{1}"></data>.
- $x$ can be turned into any positive number which not greater than $x$.
- When <data value="v{x}o{&ge;}c{4}"></data>, $x$ can be turned into the positive number as large as you want by repeating these two steps: decreasing $x$ to the biggest even number which is not greater than $x$ and multiplying $x$ with <data value="f{o{3}l{}o{2}}"></data>.

So we have the following situations, which is the solution we want:

- When <data value="v{x}o{&ge;}v{y}"></data>, the answer is YES.
- When <data value="v{x}o{=}c{2}"></data> and <data value="v{y}o{=}c{3}"></data>, the answer is YES.
- When <data value="v{x}o{&ge;}c{4}"></data>, the answer is YES.
- Otherwise, the answer is NO.


## Code

- [Solution](CF.1257B.0.cpp)
