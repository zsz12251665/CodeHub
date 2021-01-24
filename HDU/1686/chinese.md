# HDU 1686

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-1686)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=1686)

## 解法

This problem is a simple practice of <abbr title="Knuth-Morris-Pratt string searching algorithm">KMP</abbr>, which I have been trying to understand it and use it since last weekend. However, even until now I still have some problems understanding this damn code. So let's just take it easy. 

As we all know, a simple way to find a model string in the question string is to enumerate the position of the model string, which is the position of the character which the first character of the model string matches. Then you scan the whole model string to check if every character below matches too. So the time complexity is <data value="o{O}o{(}v{n}o{}v{m}o{)}"></data>, which <data value="v{n}"></data> and <data value="v{m}"></data> means the length of the question string and the model string. However, you can find that some characters does not need to be compared once more. For example, for a model string "ABCA", if you find it unmatched at the third character, there is no need to move the position 1 or 2 or 3 forward because it must not match. That's how KMP works. 

So KMP is based on a simple rule: when your scanning pointer has reached to a character, you've known what characters before it are. If we can use this information, we don't need to move the pointer back. This makes KMP efficient. The way we make it is the partial match table (what it is and how we calculate it will be introduced later). When we found an unmatched character, the position of the model string we move forward is the difference of the number of the characters we've matched and the partial match value. 

The partial match value of a string is the maximum length of a string (different from the string itself) which is both its prefix and its suffix. For example, the partial match value of "ABCABC" is 3 because "ABC" is both its prefix and its suffix. And the partial match table of a string is a table of the partial match value of all the prefixes of the string. In the following example, <data value="v{w}"></data> means the model string and <data value="v{v}"></data> is the partial match value. 

By the way, this problem is as same as <a href="/codes/?oj=POJ&pid=3461">POJ 3461</a>. I wrote this problem's solution just because POJ was broken and I have to hand the code to HDU last night. 

P. S. It is very odd that Pascal passed POJ 3461 but not this problem! 

## 代码

- [正解](HDU.1686.0.cpp)