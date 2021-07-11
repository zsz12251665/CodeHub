# CF 1214A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1214A)
- [Luogu](https://www.luogu.com.cn/problem/CF1214A)
- [Codeforces](https://codeforces.com/problemset/problem/1214/A)

## Solution

It was one year and a half since my last Codeforces Round. I attended <a href="https://codeforces.com/contest/1214/">Codeforces Round #583 (Div. 1 + Div. 2, based on Olympiad of Metropolises)</a>. This is a memorable round because I was attending it in Hong Kong! Just in the apartment of my classmate Wei Jiaxi!

So after you read the description of Problem A, you might have found that the other dollar bills are multiple times of the 1 dollar bill and the other euro bills can be replaced by several 5 euro bills. So we just need to think about this two kinds of bills. So now we focus on the 1 dollar bills and the 5 euro bills. We can simply enumerate the number of 5 euro bills (enumerating 1 dollar bills is also valid but it might worth less so the number will be bigger) and then exchange the rest of the rubles to 1 dollar bills and find out the minimum numbers of unused rubles.

## Code

- [Solution](CF.1214A.0.cpp)
