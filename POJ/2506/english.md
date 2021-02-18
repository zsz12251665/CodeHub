# POJ 2506

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2506)
- [POJ](http://poj.org/problem?id=2506)

## Solution

Let's solve the problem step by step. It is obvious that there is only one method to tile a <data value="c{2}o{&times;}c{0}"></data> rectangle(use no tiles) and a <data value="c{2}o{&times;}c{1}"></data> rectangle(use a <data value="c{2}o{&times;}c{1}"></data> tile). How about the number of methods for longer rectangles? Well, a method for a <data value="c{2}o{&times;}v{i}"></data> rectangle must have a standing <data value="c{2}o{&times;}c{1}"></data> tile, a <data value="c{2}o{&times;}c{2}"></data> tile or two lying <data value="c{2}o{&times;}c{1}"></data> tiles, right? If there is a standing <data value="c{2}o{&times;}c{1}"></data> tile, the number of methods will be the number of methods for a <data value="c{2}o{&times;}o{(}v{i}o{-}c{1}o{)}"></data> rectangle. If there is a <data value="c{2}o{&times;}c{2}"></data> tile or two lying <data value="c{2}o{&times;}c{1}"></data> tiles, the number of methods will be the number of methods for a <data value="c{2}o{&times;}o{(}v{i}o{-}c{2}o{)}"></data> rectangle. So the number of methods will be the number of methods for a <data value="c{2}o{&times;}o{(}v{i}o{-}c{1}o{)}"></data> rectangle plus twice the number of methods for a <data value="c{2}o{&times;}o{(}v{i}o{-}c{2}o{)}"></data> rectangle in total. The data range is lower than 250, so we can pretreat the numbers for every <data value="v{i}"></data>.

## Code

- [Solution](POJ.2506.0.cpp)
