# HDU 2548

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2548)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2548)

## Solution

This problem is just a mathematical problem. The speed how fast the two armies get close is $u+v$, the sum of their speeds. Then the time they meet will be $l\over u+v$. The reporter is always running, so the time he runs is also $l\over u+v$. And the distance he runs will equal the speed multiply the time that is $w l\over u+v$. So when you read a group of $(u,v,w,l)$, just output $w l\over u+v$.

## Code

- [Solution](HDU.2548.0.cpp)
