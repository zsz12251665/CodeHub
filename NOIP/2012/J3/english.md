# NOIP 2012J3

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1077)
- [Vijos](https://www.vijos.org/p/1792)

## Solution

This problem is a <abbr title="dynamic programming">dp</abbr> problem. We make the <data value="v{dp}"></data> array that <data value="v{dp}b{v{i}o{,}v{j}}"></data> means after choosing $i$ kinds of flowers we know have $j$ pots of flowers. And the state transition formula will be <data value="v{dp}b{v{i}o{,}v{j}}o{=}o{&sum;}i{o{min}o{(}v{a}b{v{i}}o{,}v{j}o{)}l{}v{k}o{=}c{0}}v{dp}b{v{i}o{-}c{1}o{,}v{j}o{-}v{k}}"></data>, that $k$ means to the number of the pots of the $i$-th flowers. And the answer, of course, will be <data value="v{dp}b{v{n}o{,}v{m}}"></data>.

## Code

- [Solution](NOIP.2012J3.0.cpp)
