# POJ 1088

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-1088)
- [POJ](http://poj.org/problem?id=1088)

## Solution

First of all, I thought it can be solved by a <abbr title="Breadth-First Search">BFS</abbr> from the lowest point to the highest point and got a <abbr title="Wrong Answer">WA</abbr> with a situation like $\begin{matrix}8&9&1&8&8\\4&5&6&7&8\end{matrix}$.

Obviously, the longest length is 5. But it is not from the highest point or the lowest. So I have to search every point to make sure the length I find is the longest. I use a kind of memorable search to make the time shorter. When I reach a point, the search function will return the answer immediately if it has been searched. Or it will search the points around and return the longest length plus 1, which means $L_{x,y}=\max(L_{x-1,y},L_{x,y-1},L_{x+1,y},L_{x,y+1})+1$.

## Code

- [Solution](POJ.1088.0.cpp)
