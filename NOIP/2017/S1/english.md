# NOIP 2017S1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P3951)
- [Vijos](https://www.vijos.org/p/2028)

## Solution

I had no idea to solve a pair of <data value="o{(}v{a}o{,}v{b}o{)}"></data> while they are as large as <data value="c{10}p{9}"></data> with <abbr title="the extended Greatest Common Division algorithm">exGCD</abbr>!

After getting out of the examination hall, someone told me that the correct answer is <data value="o{(}v{a}o{}v{b}o{-}v{a}o{-}v{b}o{)}"></data>. How can the problem be a mathematical one with an <data value="o{O}o{(}c{1}o{)}"></data> time complexity? Oh Jesus it's just the first problem! It should be solved by simulation or <abbr title="Brute Force">BF</abbr>! But complaining can change nothing. In the following I will prove you why <data value="o{(}v{a}o{}v{b}o{-}v{a}o{-}v{b}o{)}"></data> is the correct answer.

We will use contradiction to prove it. If <data value="o{(}v{a}o{}v{b}o{-}v{a}o{-}v{b}o{)}"></data> is able to be formed by $a$ and $b$, then we will have <data value="v{a}o{}v{b}o{-}v{a}o{-}v{b}o{=}v{a}o{}v{n}o{+}v{b}o{}v{m}o{(}v{n}o{,}v{m}o{&isin;}c{&#8469;}o{)}"></data>. Then it will be transformed into <data value="v{a}o{}v{b}o{=}v{a}o{}o{(}v{n}o{+}c{1}o{)}o{+}v{b}o{}o{(}v{m}o{+}c{1}o{)}"></data>. So that we'll have <data value="v{a}o{}o{(}v{b}o{-}v{n}o{-}c{1}o{)}o{=}v{b}o{}o{(}v{m}o{+}c{1}o{)}"></data> and <data value="v{b}o{}o{(}v{a}o{-}v{m}o{-}c{1}o{)}o{=}v{a}o{}o{(}v{n}o{+}c{1}o{)}"></data>, which means <data value="v{a}o{|}v{b}o{}o{(}v{m}o{+}c{1}o{)}"></data> and <data value="v{b}o{|}v{a}o{}o{(}v{n}o{+}c{1}o{)}"></data>. However, $a$ and $b$ are coprime, so <data value="v{a}o{|}o{(}v{m}o{+}c{1}o{)}"></data> and <data value="v{b}o{|}o{(}v{n}o{+}c{1}o{)}"></data>. Then we define <data value="v{m}o{+}c{1}o{=}v{x}o{}v{a}o{(}v{x}o{&isin;}c{&#8469;}b{+}o{)}"></data> and <data value="v{n}o{+}c{1}o{=}v{y}o{}v{b}o{(}v{y}o{&isin;}c{&#8469;}b{+}o{)}"></data> and then put it back to the equation <data value="v{a}o{}v{b}o{=}v{a}o{}o{(}v{n}o{+}c{1}o{)}o{+}v{b}o{}o{(}v{m}o{+}c{1}o{)}"></data>, there will be <data value="v{a}o{}v{b}o{=}v{a}o{}o{(}v{n}o{+}c{1}o{)}o{+}v{b}o{}o{(}v{m}o{+}c{1}o{)}o{&hArr;}v{a}o{}v{b}o{=}v{a}o{}v{b}o{}v{x}o{+}v{a}o{}v{b}o{}v{y}o{&hArr;}c{1}o{=}v{x}o{+}v{y}"></data>. Obviously that the sum of two positive integers cannot equal <data value="c{1}"></data>, so the hypothesis is wrong and the proposition is proved.

## Code

- [Solution](NOIP.2017S1.0.cpp)