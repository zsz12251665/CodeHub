# POJ 3070

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3070)
- [POJ](http://poj.org/problem?id=3070)

## 解法

The method of calculating the <data value="v{n}"></data>-th number of the Fibonacci integer sequence has been given in the description of the problem. It is the power of matrix. But since <data value="c{0}o{&le;}v{n}o{&le;}c{10}p{9}"></data>, we need a fast power of matrix, which is like the fast power of integer of which time complexity is <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. 

For the beginners who don't know how the multiplication of matrix is calculated, here it is. For two matrices <data value="o{[}m{v{a}b{1}l{}v{a}b{3}}o{&nbsp;}m{v{a}b{2}l{}v{a}b{4}}o{]}"></data> and <data value="o{[}m{v{b}b{1}l{}v{b}b{3}}o{&nbsp;}m{v{b}b{2}l{}v{b}b{4}}o{]}"></data>, the product is <data value="o{[}m{v{a}b{1}o{}v{b}b{1}o{+}v{a}b{2}o{}v{b}b{3}l{}v{a}b{3}o{}v{b}b{1}o{+}v{a}b{4}o{}v{b}b{3}}o{&nbsp;}m{v{a}b{1}o{}v{b}b{2}o{+}v{a}b{2}o{}v{b}b{4}l{}v{a}b{3}o{}v{b}b{2}o{+}v{a}b{4}o{}v{b}b{4}}o{]}"></data>. Although it doesn't have the commutative property, the multiplication of matrix has the associative property, which means <data value="o{(}o{[}m{v{a}b{1}l{}v{a}b{3}}o{&nbsp;}m{v{a}b{2}l{}v{a}b{4}}o{]}o{[}m{v{b}b{1}l{}v{b}b{3}}o{&nbsp;}m{v{b}b{2}l{}v{b}b{4}}o{]}o{)}o{[}m{v{c}b{1}l{}v{c}b{3}}o{&nbsp;}m{v{c}b{2}l{}v{c}b{4}}o{]}o{=}o{[}m{v{a}b{1}l{}v{a}b{3}}o{&nbsp;}m{v{a}b{2}l{}v{a}b{4}}o{]}o{(}o{[}m{v{b}b{1}l{}v{b}b{3}}o{&nbsp;}m{v{b}b{2}l{}v{b}b{4}}o{]}o{[}m{v{c}b{1}l{}v{c}b{3}}o{&nbsp;}m{v{c}b{2}l{}v{c}b{4}}o{]}o{)}"></data>. So we can make the fast power of matrix as same as the fast power of integer which transforms the index into binary. 

## 代码

- [正解](POJ.3070.0.cpp)
