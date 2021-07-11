# NOIP 2004J4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1088)
- [Vijos](https://www.vijos.org/p/1115)

## Solution

I have to admit that the full arrangement confused me for a while, but later I found a way. I made a find function to find if there is another finger next to the finger I am using. If there is, it'll return the number of the next finger, or it'll return -1. If it return -1, it means that I need to carry on the previous bit. So the add function is used to add a number to the current bit. What's more, the used array is used to keep whether the finger is used or not so that I can find the next finger faster. That's the solution.

## Code

- [Solution](NOIP.2004J4.0.cpp)
