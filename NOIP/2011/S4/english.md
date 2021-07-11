# NOIP 2011S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1313)
- [Vijos](https://www.vijos.org/p/1739)

## Solution

There are two solutions to solve this problem. The first one is to use Pascal's triangle. The second one is <abbr title="dynamic programming">dp</abbr> algorithm. The code below is based on the second solution.

First, we set up an <data value="v{coe}"></data> array that <data value="v{coe}b{v{i}o{,}v{j}}"></data> is used to keep the coefficient of <data value="v{x}p{v{i}}o{}v{y}p{v{j}}"></data>. And the state transition formula is <data value="v{coe}b{v{i}o{,}v{j}}o{=}v{a}o{}v{coe}b{v{i}o{-}c{1}o{,}v{j}}o{+}v{b}o{}v{coe}b{v{i}o{,}v{j}o{-}c{1}}"></data>. And it is also very easy to verify. So it won't be given here. In this way, we can solve the problem with a time complexity of <data value="o{O}o{(}v{n}o{}v{m}o{)}"></data>.

P. S. The <data value="o{(}v{i}o{,}v{j}o{)}"></data> in <data value="v{coe}b{v{i}o{,}v{j}}"></data> may not conform <data value="v{i}o{+}v{j}o{=}v{k}"></data>, but it is the coefficient of <data value="v{x}p{v{i}}o{}v{y}p{v{j}}"></data> in the polynomial <data value="o{(}v{a}o{}v{x}o{+}v{b}o{}v{y}o{)}p{v{i}o{+}v{j}}"></data>.

## Code

- [Solution](NOIP.2011S4.0.cpp)
