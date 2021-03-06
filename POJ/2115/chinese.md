# POJ 2115

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-2115)
- [POJ](http://poj.org/problem?id=2115)

## 解法

Today is the Day 0 of <abbr title="Guangdong Olympiad in Informatics">GDOI</abbr> 2018. Here is a review of <abbr title="the extended Greatest Common Division algorithm">exGCD</abbr>. 

As we've mentioned in <a href="/codes/?oj=NOIP&pid=2012S4">NOIP 2012S4</a>, exGCD is used to find a pair of <data value="o{(}v{x}o{,}v{y}o{)}"></data> which satisfies <data value="v{a}o{}v{x}o{+}v{b}o{}v{y}o{=}o{gcd}o{(}v{a}o{,}v{b}o{)}"></data>. It can be calculated with exGCD because <data value="v{a}o{}v{x}o{+}v{b}o{}v{y}o{=}v{b}o{}o{&lfloor;}f{v{a}l{}v{b}}o{&rfloor;}o{}v{x}o{+}o{(}v{a}o{mod}v{b}o{)}o{}v{x}o{+}v{b}o{}v{y}o{=}o{(}v{a}o{mod}v{b}o{)}o{}v{x}o{+}v{b}o{}o{(}o{&lfloor;}f{v{a}l{}v{b}}o{&rfloor;}o{}v{x}o{+}v{y}o{)}o{=}o{gcd}o{(}v{a}o{,}v{b}o{)}o{=}o{gcd}o{(}v{b}o{,}v{a}o{mod}v{b}o{)}"></data>. 

Now we focus on the problem. The problem is to calculate <data value="v{x}"></data> in formula <data value="v{a}o{+}v{c}o{}v{x}o{&equiv;}v{b}o{(}o{mod}c{2}p{v{k}}o{)}"></data>, which equals to <data value="v{c}o{}v{x}o{&equiv;}v{b}o{-}v{a}o{(}o{mod}c{2}p{v{k}}o{)}"></data> and <data value="v{c}o{}v{x}o{+}c{2}p{v{k}}o{}v{y}o{=}v{b}o{-}v{a}"></data>. So whether <data value="v{x}"></data> exists depends on if <data value="o{gcd}o{(}v{c}o{,}c{2}p{v{k}}o{)}o{|}o{(}v{b}o{-}v{a}o{)}"></data>. Then the next step is to calculate <data value="v{c}p{o{-}c{1}}o{(}o{mod}c{2}p{v{k}}o{)}"></data> and the problem is solved. 

By the way, you may probably notice that we need to module <data value="f{c{2}p{v{k}}l{}o{gcd}o{(}v{c}o{,}c{2}p{v{k}}o{)}}"></data> but not <data value="c{2}p{v{k}}"></data>. This is because we've divided <data value="o{gcd}o{(}v{c}o{,}c{2}p{v{k}}o{)}"></data> to make sure <data value="v{c}p{o{-}c{1}}o{(}o{mod}c{2}p{v{k}}o{)}"></data> exists. 

## 代码

- [正解](POJ.2115.0.cpp)
