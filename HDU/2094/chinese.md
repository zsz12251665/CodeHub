# HDU 2094

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2094)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2094)

## 解法

It is not a easy problem unless you find the connection between the champion and the losers. Yes, the champion won't be someone who used to lose a match. He/She must win all matches that he/she played. So we can read the winner list and the loser list. Then delete the winner who used to lose from the list. Then check if there is only one person in the list. It is an <data value="o{O}o{(}v{n}p{2}o{)}"></data> algorithm. But <data value="v{n}o{&lt;}c{1000}"></data>. So it is enough. 

While keeping the name in the list, I found that it is more difficult to keep a string than an integer. So I turn the name string into integers in a way like hash. Luckily, it earns an <abbr title="Accepted">AC</abbr>. But I have to admit that this algorithm may be hacked while processing some data. By the way, the code in Pascal haven't got an AC. But it always gives me the right answer when I debug it because I just translated it completely from the code in C++. That's odd! If there is some one who read this blog can solve this problem, I'll very appreciate it. 

## 代码

- [正解](HDU.2094.0.cpp)