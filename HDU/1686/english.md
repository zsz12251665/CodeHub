# HDU 1686

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-1686)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=1686)

## Solution

This problem is a practice of <abbr title="Knuth-Morris-Pratt string searching algorithm">KMP</abbr>.

As we all know, a simple way to find a model string in the query string is to enumerate the head position of the model string, which is the position of the character which the first character of the model string matches. Then you scan the whole model string to check if every character below matches too. So the time complexity is $\operatorname{O}(n m)$, which $n$ and $m$ means the length of the query string and the model string. However, you can find that some characters does not need to be compared once more. For example, for a model string `"ABCA"`, if you find it unmatched at the last character, there is no need to move the head position 1 nor 2 nor 3 but 4 forward because they must not match. That's how KMP works.

So KMP is based on a simple rule: When your scanning pointer has reached to a character, you've known what characters before it are. If we can use this information, we don't need to move the pointer back. This makes KMP efficient. The way we make it is the partial match table (what it is and how we calculate it will be introduced later). When we found an unmatched character, the position of the model string we move forward is the difference of the number of the characters we've matched and the partial match value.

The partial match value of a string is the maximum length of a string (different from the string itself) which is both its prefix and its suffix. For example, the partial match value of `"ABCABC"` is 3 because `"ABC"` is both its prefix and its suffix. And the partial match table of a string is a table of the partial match value of all the prefixes of the string. In the example below, $w$ means the model string and $v$ is the partial match value.

|  $w$  |  `A`  |  `A`  |  `B`  |  `D`  |  `A`  |  `A`  |  `B`  |  `C`  |  `A`  |  `A`  |  `A`  |  `B`  |  `D`  |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
|  $v$  |  $0$  |  $1$  |  $0$  |  $0$  |  $1$  |  $2$  |  $3$  |  $0$  |  $1$  |  $2$  |  $2$  |  $3$  |  $4$  |

## Code

- [Solution](HDU.1686.0.cpp)
