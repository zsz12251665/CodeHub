# CF 723A

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-723A)
- [Luogu](https://www.luogu.com.cn/problem/CF723A)
- [Codeforces](https://codeforces.com/problemset/problem/723/A)

## Solution

The problem is very simple. The meeting place must be where the middle person is. This is because if the meeting is between the left one and the right one, their total moving distance are the same, which is the distance between them. The difference is the distance of the middle one. So the meeting place is where he/she stands, which makes the moving distance is zero.

We show the 3 ways of swap the value of two variables below: using the third variable, using bit operator xor and using the sum.

The most common one is to use another variable. First of all, you make a copy of the value in the first variable so that you can refill it with the other value. Then you can put the copy into the second variable. This method is also the most popular way because it has no requirement except for a little space more. But the space is usually not the problem in the competition.

Another one is to use the bit operator <data value="o{&oplus;}"></data> (xor). This method makes sense because <data value="o{(}v{a}o{&oplus;}v{b}o{)}o{&oplus;}v{b}o{=}v{a}"></data>.

The last one is to use the sum. This method is also easy to understand. But pay attention to the data range because this method requires the range of the variable is at least twice bigger than the data range because of <data value="o{(}v{a}o{+}v{b}o{)}"></data>.

In a way, the second and the third way is similar because <data value="o{&oplus;}"></data> is called the addition without carry in binary.

## Code

- [Solution](CF.723A.0.cpp)
