# NOIP 2016J2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2010)
- [Vijos](https://www.vijos.org/p/2010)

## Solution

The amount of the year is much more than the amount of month and date. So why don't we start with the month and date? Enumerate every last four numbers which is a date. Then get the whole eight numbers and check if it is in the interval. Don't forget the counter and output it.

By the way, we don't need to judge whether the year is a leap year or not, because if the date is February 29th, the palindromic date will be 92200229. Of course 9220 is a leap year. So we don't need to worried about the leap year.

## Code

- [Solution](NOIP.2016J2.0.cpp)
