# POJ 2506

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2506)
- [POJ](http://poj.org/problem?id=2506)

## Solution

It is obvious that there is only one method to tile a $2\times0$ rectangle (use no tiles) and a $2\times1$ rectangle (use a $2\times1$ tile). How about longer rectangles? A method for a $2\times i(i\ge2)$ rectangle must end with a standing $2\times1$ tile, a $2\times2$ tile or two lying $2\times1$ tiles. If it is a standing $2\times1$ tile, the number of methods will be the number of methods for a $2\times(i-1)$ rectangle. If it is a $2\times2$ tile or two lying $2\times1$ tiles, the number of methods will be the number of methods for a $2\times(i-2)$ rectangle. So the number of methods in total will be the number of methods for a $2\times(i-1)$ rectangle plus twice the number of methods for a $2\times(i-2)$ rectangle. The data range is only $0\le n\le250$, so we can preprocess the answer for every $n$.

## Code

- [Solution](POJ.2506.0.cpp)
