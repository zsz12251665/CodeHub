# POJ 2965

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2965)
- [POJ](http://poj.org/problem?id=2965)

## Solution

Firstly, your action on a handle have two choice: change it once or leave it. That is because every twice you do on the same handle, it is as same as what it is like when you haven't do. Secondly, if you do on all the handles on the row $i$ and column $j$, it will just change the stage of $(i,j)$. That is because the handles which are not on row $i$ or column $j$ have been changed twice. For example, $(a,b)$ has been changed by actions on $(i,b)$ and $(a,j)$. And the handles on the row $i$ or column $j$ excluding $(i,j)$ have been changed 4 times (by actions on $(i,1)$, $(i,2)$, $(i,3)$, $(i,4)$ or actions on $(1,j)$, $(2,j)$, $(3,j)$, $(4,j)$). $(i,j)$ has been changed for 7 times (every action has covered on $(i,j)$), which is the only one that is changed odd times.

With the information above, the solution is very obvious. First of all, scan the handles. Whenever finding a `'+'` on $(i,j)$, change on every handle on the row $i$ and column $j$. If it has been changed, undo it. Then count the number of the handles that has been changed and print the coordinates.

## Code

- [Solution](POJ.2965.0.cpp)
