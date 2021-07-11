# CF 675A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-675A)
- [Luogu](https://www.luogu.com.cn/problem/CF675A)
- [Codeforces](https://codeforces.com/problemset/problem/675/A)

## Solution

My brain must have been overheated for two months because I got 2 <abbr title="Wrong Answer">WA</abbr>. That's a extremely simple problem. As you can see in the Code, if <data value="v{a}o{=}v{b}"></data>, the answer will be "YES" with no doubts. Otherwise, if <data value="v{c}o{=}c{0}"></data>, there should be "NO". Besides, if <data value="o{|}v{a}o{-}v{b}o{|}"></data> is a multiple of <data value="o{|}v{c}o{|}"></data>, and the sequence is increasing (<data value="v{c}o{&gt;}c{0}"></data> and <data value="v{a}o{&lt;}v{b}"></data>) or decreasing (<data value="v{c}o{&lt;}c{0}"></data> and <data value="v{a}o{&gt;}v{b}"></data>), the answer will be "YES" too, otherwise the answer will be "NO". We can use the <data value="o{&oplus;}"></data> (xor) operator here. In logic operators, <data value="o{&oplus;}"></data> has a higher priority than <data value="o{&or;}"></data> (or), but lower than <data value="o{&and;}"></data> (and) as well as <data value="o{&not;}"></data> (not). The rules of <data value="o{&oplus;}"></data> were given below:

- <data value="c{TRUE}o{&oplus;}c{TRUE}o{=}c{FALSE}">
- <data value="c{TRUE}o{&oplus;}c{FALSE}o{=}c{TRUE}">
- <data value="c{FALSE}o{&oplus;}c{TRUE}o{=}c{TRUE}">
- <data value="c{FALSE}o{&oplus;}c{FALSE}o{=}c{FALSE}">


## Code

- [Solution](CF.675A.0.cpp)
