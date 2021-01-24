# HDU 2089

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-2089)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=2089)

## Solution

Well, I don't know why I made 3 <abbr title="Time Limit Exceed">TLE</abbr> and 1 <abbr title="Wrong Answer">WA</abbr> before the <abbr title="Accepted">AC</abbr> arrived, but anyway it is not a difficult problem in fact. At the very beginning, I just search the interval between <data value="v{n}"></data> and <data value="v{m}"></data> and count the number. And that's the [Wrong Solution](HDU.2089.0.cpp). However, it takes too much time to search the interval when it is asked. So we can use a way just like prefix sum that we'll preprocess an array with the number of the lucky numbers(just like the array count in the [Correct Solution](HDU.2089.1.cpp)). After reading a pair of <data value="o{(}v{n}o{,}v{m}o{)}"></data>, all we need to do is to subtract the number of the lucky numbers from <data value="c{0}"></data> to <data value="o{(}v{n}o{-}c{1}o{)}"></data> from the one from <data value="c{0}"></data> to <data value="v{m}"></data>. Although it takes much time in preprocessing, but it can reduce the time of searching from <data value="o{O}o{(}v{n}o{)}"></data> to <data value="o{O}o{(}c{1}o{)}"></data>. So I get the AC with the code given as the [Correct Solution](HDU.2089.1.cpp) in the code part.

## Code

- [Wrong Solution](HDU.2089.0.cpp)
- [Correct Solution](HDU.2089.1.cpp)
