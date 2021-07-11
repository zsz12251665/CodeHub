# NOIP 2013S5

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1970)
- [Vijos](https://www.vijos.org/p/1845)

## Solution

Well, this problem requires a <abbr title="dynamic programming">dp</abbr> algorithm. We know that the sequence will look like the waves. So we set up two dp arrays <data value="v{rise}"></data> and <data value="v{drop}"></data>. <data value="v{rise}b{v{i}}"></data> keeps the maximum length when <data value="v{h}b{v{i}}"></data> is risen in the end. <data value="v{drop}b{v{i}}"></data> keeps the maximum length when <data value="v{h}b{v{i}}"></data> is dropped in the end. Then we'll obviously have <data value="v{rise}b{v{i}}o{=}v{drop}b{v{i}o{-}c{1}}o{+}c{1}"></data> when <data value="v{h}b{v{i}}o{&gt;}v{h}b{v{i}o{-}c{1}}"></data> and <data value="v{drop}b{v{i}}o{=}v{rise}b{v{i}o{-}c{1}}o{+}c{1}"></data> when <data value="v{h}b{v{i}}o{&lt;}v{h}b{v{i}o{-}c{1}}"></data>. Otherwise, we'll have <data value="v{rise}b{v{i}}o{=}v{rise}b{v{i}o{-}c{1}}"></data> and <data value="v{drop}b{v{i}}o{=}v{drop}b{v{i}o{-}c{1}}"></data> which means we won't keep the flowers here. And it won't take any effects because the answer won't be worse. In the end, we compare the lengths of the two sequences and output the big one.

## Code

- [Solution](NOIP.2013S5.0.cpp)
