# NOIP 2013S1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1965)
- [Vijos](https://www.vijos.org/p/1841)

## Solution

This problem is testing our fast power algorithm because of the <data value="c{10}p{v{k}}"></data>.

First, we should transform the index into binary. For example, we have <data value="c{10}p{23}o{=}c{10}p{o{(}c{10111}o{)}b{2}}o{=}c{10}p{16}o{&times;}c{10}p{4}o{&times;}c{10}p{2}o{&times;}c{10}p{1}"></data>. It is not difficult to find it we can square the base for times to get <data value="c{10}p{1}"></data>, <data value="c{10}p{2}"></data>, <data value="c{10}p{4}"></data> and <data value="c{10}p{16}"></data>. That can reduce the time complexity to <data value="o{O}o{(}o{lg}v{n}o{)}"></data>.

## Code

- [Solution](NOIP.2013S1.0.cpp)
