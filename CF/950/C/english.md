# CF 950C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-950C)
- [Luogu](https://www.luogu.com.cn/problem/CF950C)
- [Codeforces](https://codeforces.com/problemset/problem/950/C)

## Solution

This problem is as difficult as the second problem in Senior Group, <abbr title="National Olympiad in Informatics in Provinces">NOIP</abbr>. It is not hard to understand the problem. What you are asked to do is to check if a 01 string can be divided into several zebra sequences, which start and end with '0', and there is always a '0' between two '1', and an '1' between two '0'.

You can use an adjacency table to keep the zebra sequences. So you can add a char to a sequence in <data value="o{O}o{(}c{1}o{)}"></data>. Then you scan the string. When you find a char, put it at the end of a sequence ends with another char. When all the sequences end with '0' and you find another '0', just create another zebra sequence. But if you find all the sequences end with '1' and there is another '1' waiting, that means it is impossible to divide the 01 string into several zebra sequences because there are too many '1'. As a result, you had to print a -1.

Don't forget to check if all the sequences end with '0'. If any of them end with '1', the answer will be -1 too because it is an invalid zebra sequence. I got a <abbr title="Wrong Answer">WA</abbr> because of this.

By the way, if you just submit the code just like Solution 1, you'll receive a <abbr title="Time Limit Exceeded">TLE</abbr> (I did). You spent too much time finding the suitable sequence. The regular way is <data value="o{O}o{(}o{|}v{s}o{|}o{)}"></data>, which <data value="o{|}v{s}o{|}"></data> is the length of the string $s$. You need two queues to put the sequences inside so that you can find the suitable sequences in <data value="o{O}o{(}c{1}o{)}"></data> just like what Solution 2 did.

P. S. Due to the well-known low efficiency of Pascal, there is a potential TLE for Pascal coders (My Solution 2 Pascal got several TLE before the lucky <abbr title="Accepted">AC</abbr>. It spent 951 milliseconds while Solution 2 C++ spent only 77 milliseconds).

## Code

- [Solution 1](CF.950C.0.cpp)
- [Solution 2](CF.950C.1.cpp)
