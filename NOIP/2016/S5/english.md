# NOIP 2016S5

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2827)
- [Vijos](https://www.vijos.org/p/2007)

## Solution

Most people used heap to solve the problem because it does seems like a problem of that kind. But when the mark came out, the heap didn't earn an <abbr title="Accepted">AC</abbr>.
To my surprise, the problem requires 3 queues with an <data value="o{O}o{(}v{n}o{+}v{m}o{)}"></data> time complexity. The numbers in the queue are decreasing. That is because the worm you choose to cut is always the longest among all. So the pieces is also getting shorter and shorter. You said that the length of the other worms are increasing every second? But the length of the pieces of worm are getting longer and longer as well. That makes the queues monotonic. So at first, put all the worms in the first queue and sort it. Then in every moment of <data value="o{[}c{1}o{,}v{m}o{]}"></data>, choose the longest worm from the heads of the 3 queues, cut it into two pieces and put them into the second queue and the third queue. How about the increasing length? We can delay it. Only after getting the longest worm do we add the increased length of it. In order to keep it still suitable for the pieces, subtract the increased length from each piece after cutting. That can reduce the time complexity of each cutting operator into <data value="o{O}o{(}c{1}o{)}"></data>.

## Code

- [Solution](NOIP.2016S5.0.cpp)
