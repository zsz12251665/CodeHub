# POJ 3295

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-3295)
- [POJ](http://poj.org/problem?id=3295)

## 解法

Since there are many different groups of <data value="o{(}v{p}o{,}v{q}o{,}v{r}o{,}v{s}o{,}v{t}o{)}"></data>. We need to enumerate them one by one. Luckily, all of them are <data value="c{0}"></data> or <data value="c{1}"></data>, so there are just 32 groups. I got confused on how to know the expression. Later, I found that it is a prefix expression. So I can scan it from end to start and solve it like the suffix expression. You'll need a stack to keep the number you've get. When you get a number, put it into the stack. When you get an operator, push the top numbers, and put the answer into the stack. In this way, the last number left in the stack would be the answer of the whole expression. 

## 代码

- [正解](POJ.3295.0.cpp)
