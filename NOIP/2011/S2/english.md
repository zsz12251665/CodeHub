# NOIP 2011S2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1311)
- [Vijos](https://www.vijos.org/p/1737)

## Solution

We can think this problem in this way: we have known the number of the ways when there are $i$ hotels. Now how should I change the answer when I add one hotel more? First of all, one of these two guys must stay in the new hotel because every plan that none of them stay in the hotel has all been counted. Second, If the new cafe is under the cost limit, the other guy can stay in any hotels in the same colour. Or he can stay in any hotels in the same colour except the ones which have no fit cafe on the way to the new hotel. Third, we can use a counter to count how many hotels the second guy can stay in. When you get a new hotel, if its cafe is under the limit, set it as same as the number of the hotels in the same colour. Or do nothing to the counter and just count the numbers of the hotels in the same colour. So that's the solution, which starts from no hotels and 0 ways to stay in.

## Code

- [Solution](NOIP.2011S2.0.cpp)
