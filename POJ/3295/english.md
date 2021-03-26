# POJ 3295

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3295)
- [POJ](http://poj.org/problem?id=3295)

## Solution

Since there are many different groups of $(p,q,r,s,t)$, we need to enumerate them one by one. Luckily, all of them are either $0$ or $1$, so there are just 32 groups. For the expression, it is a prefix expression. So I can scan it from end to start and solve it like the suffix expression. You'll need a stack to keep the number you've get. When you get a number, push it into the stack. When you get an operator, pop the top numbers, and push the answer into the stack. In this way, the last number left in the stack would be the answer of the whole expression.

## Code

- [Solution](POJ.3295.0.cpp)
