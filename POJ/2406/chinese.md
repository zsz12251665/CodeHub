# POJ 2406

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-2406)
- [POJ](http://poj.org/problem?id=2406)

## 解法

At first, I wanted to learn about <abbr title="Knuth-Morris-Pratt string searching algorithm">KMP</abbr>. So I tried to solve this problem. But later I found that KMP is not necessary for this problem. 

Let's mark a prefix of <data value="v{i}"></data> chars of the string as <data value="v{pre}b{v{i}}"></data>. If <data value="v{pre}b{v{i}}"></data> is a period of the string, we must have <data value="o{|}v{s}o{|}o{&equiv;}c{0}o{(}o{mod}v{i}o{)}"></data>, which <data value="o{|}v{s}o{|}"></data> is the length of the string <data value="v{s}"></data>. So we can enumerate the length of the period <data value="v{i}"></data>, and then scan the string to check whether the <data value="v{pre}b{v{i}}"></data> is a period of the string. So the time complexity is about <data value="o{O}o{(}o{d}o{(}o{|}v{s}o{|}o{)}o{}o{|}v{s}o{|}o{)}"></data>, which <data value="o{d}o{(}v{n}o{)}"></data> means the number of factors of <data value="v{n}"></data>. 

By the way, the time for scanning the string once will not be as large as <data value="o{O}o{(}o{|}v{s}o{|}o{)}"></data> while solving the problem. This is because when you find that a prefix is not a period, you abandon it immediately so that you don't need to scan to the end of the string. 

## 代码

- [正解](POJ.2406.0.cpp)
