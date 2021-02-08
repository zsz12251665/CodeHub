# HDU 2094

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2094)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2094)

## Solution

It is not a easy problem unless you find the connection between the champion and the losers. The champion won't be someone who used to lose a match. He/She must win all matches that he/she played. So we can read the winner list and the loser list, then delete the winner who used to lose from the list. Then check if there is only one person in the list. It is an $\operatorname{O}(n^2)$ algorithm. But as $n<1000$, it is enough.

While keeping the name in the list, I found that it is more difficult to keep a string than an integer. So I turn the name string into integers in a way like hash. Luckily, it earns an <abbr title="Accepted">AC</abbr>. But I have to admit that this algorithm may be hacked while processing some data.

## Code

- [Solution](HDU.2094.0.cpp)
