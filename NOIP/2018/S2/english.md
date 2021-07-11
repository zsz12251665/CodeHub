# NOIP 2018S2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P5020)

## Solution

Well, though it is a little difficult to find it, we can observe that this problem can be solved by removing ones that can be made up of other kinds of currency. In first group of the first example data, $6$ can be replaced by $2\times3$ and $19$ can be replaced by $3\times3+10$ so that only $3$ and $10$ are necessary.

Then the problem is much easy to solve. Because $a_i\le25000$, so we can make an array recording whether this amount of money can we made up or not. After that, we sort all kinds of currency and checked if they can be made up. If it can, remove it. Or update the array as we add a new kind of currency. Then the problem is solved.

P. S. It is not so obvious to prove that our conclusion is right. So here is the proof.

First of all, we presume that if there is a number $a$ which is not in the set we've got. There will be two possibilities. If $a$ isn't made up of the numbers in the set, it will not be an available number because it will make the system different from the given one, because there is some numbers which the simplified system can make up while the given one cannot. If $a$ is made up of the numbers in the set, it can be removed just like the other removed ones.

## Code

- [Solution](NOIP.2018S2.0.cpp)
