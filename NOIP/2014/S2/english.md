# NOIP 2014S2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1351)
- [Vijos](https://www.vijos.org/p/1906)

## Solution

I suppose that this is a mathematical problem. Some people said in can also be solved with <abbr title="dynamic programming">dp</abbr> algorithm. But here I will just show the mathematical solution.

From the definition, we know that the points which made up of a united weight should be next to a common point. So we can enumerate every point and the points besides them to make the united weight. However, this solution is absolutely unacceptable because the time complexity will be about <data value="o{O}o{(}v{n}p{2}o{)}"></data> or close to <data value="o{O}o{(}v{n}p{3}o{)}"></data> when there are two layers of loops while enumerating the common point.

Then I think of another way. For a set of <data value="o{\{}v{a}b{v{k}}o{|}v{k}o{&isin;}o{[}c{1}o{,}v{n}o{]}o{,}v{k}o{&isin;}c{&#8469;}o{\}}"></data>, the sum of the product of every pair of <data value="o{(}v{a}b{v{i}}o{,}v{a}b{v{j}}o{)}"></data> equals <data value="o{(}o{&sum;}i{v{n}l{}v{k}o{=}c{1}}v{a}b{v{k}}o{)}p{2}"></data>. This includes some situations look like <data value="v{a}b{v{i}}p{2}"></data>, so we can remove it by subtracting <data value="o{&sum;}i{v{n}l{}v{k}o{=}c{1}}v{a}b{v{k}}p{2}"></data>. That means while calculating the sum of all the united weights, we only need to enumerate the points beside the common point once. At the same time, we can find the maximum united weight by finding the maximum two weights. That means we can enumerate the common points with an <data value="o{O}o{(}v{d}b{v{i}}o{)}"></data> process for each points, with which <data value="v{d}b{v{i}}"></data> means the degree of the point $i$. So the total time complexity will be <data value="o{O}o{(}v{n}o{)}"></data> because there are <data value="o{(}v{n}o{-}c{1}o{)}"></data> edges so the total degree will be <data value="c{2}o{}o{(}v{n}o{-}c{1}o{)}"></data>.

P. S. In fact, you don't need to divide 2 when collecting the sum of the united weights. Because when you collect the united weight of the points pair <data value="o{(}v{u}o{,}v{v}o{)}"></data>, you collect <data value="o{(}v{v}o{,}v{u}o{)}"></data> at the same time by multiply the united weight with 2.

## Code

- [Solution](NOIP.2014S2.0.cpp)