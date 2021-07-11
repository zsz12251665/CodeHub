# NOIP 2005J3

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1048)
- [Vijos](https://www.vijos.org/p/1104)

## Solution

The problem is a 01 knapsack problem. So we can solve it by a <var><abbr title="dynamic programming">dp</abbr></var> algorithm.

Usually, a dp algorithm is made up of a <data value="v{dp}"></data> array and the state transition formula. For a knapsack problem, the formula is <data value="v{dp}b{v{i}}o{=}o{max}i{v{cost}b{v{i}}l{}v{j}o{=}v{t}}o{(}v{dp}b{v{j}o{-}v{cost}b{v{i}}}o{+}v{price}b{v{i}}o{)}"></data>. The use of it will be shown in the code below.

## Code

- [Solution](NOIP.2005J3.0.cpp)
