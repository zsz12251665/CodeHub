# NOIP 2004S2

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1090)
- [Vijos](https://www.vijos.org/p/1097)

## Solution

Well, let's define that the bunches of fruits are <data value="v{fruit}b{1}"></data> to <data value="v{fruit}b{v{n}}"></data>. And for every $i$ in <data value="o{[}c{1}o{,}v{n}o{-}c{1}o{]}"></data>, <data value="v{fruit}b{v{i}}"></data> is smaller than <data value="v{fruit}b{v{i}o{+}c{1}}"></data>. When we need to combine two bunches of fruits, choose <data value="v{fruit}b{1}"></data> and <data value="v{fruit}b{2}"></data> can keep the least cost since they are the smallest ones. And then we add the new bunch which is <data value="o{(}v{fruit}b{1}o{+}v{fruit}b{2}o{)}"></data> back to the <data value="v{fruit}"></data> array. Now we have <data value="o{(}v{n}o{-}c{1}o{)}"></data> bunches now. Repeat these steps, we can finally have a single bunch with least cost.

What's important is that we can use a heap to keep the fruit array. The heap is a data structure with an <data value="o{O}o{(}o{lg}v{n}o{)}"></data> insert and an <data value="o{O}o{(}o{lg}v{n}o{)}"></data> extract. With the heap to keep the <data value="v{fruit}"></data> array, we can reduce the time complexity to <data value="o{O}o{(}v{n}o{}o{lg}v{n}o{)}"></data>, which is fast enough to solve the problem.

While building up the heap, I found a way to make fewer mistakes when extracting. That is fill the null part with $2147483647$. That means if a point has no child, it has a child or two children with $2147483647$. That can be very helpful because I don't need to judge if the point has child or not by the size of the heap.

## Code

- [Solution](NOIP.2004S2.0.cpp)
