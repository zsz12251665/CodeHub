# HDU 2548

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-2548)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2548)

## 解法

这题是一道数学题。两军相互靠近的速度为 $u+v$，即二者速度之和。他们相遇所需的时间为 $l\over u+v$。记者总在移动，因此他运动的时间也是 $l\over u+v$。他跑动的距离等于速度乘时间，即 $w l\over u+v$。因此对于每一组 $(u,v,w,l)$，输出 $w l\over u+v$ 即可。

## 代码

- [正解](HDU.2548.0.cpp)
