# CF 1313B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-1313B)
- [Luogu](https://www.luogu.com.cn/problem/CF1313B)
- [Codeforces](https://codeforces.com/problemset/problem/1313/B)

## Solution

What a beautiful answer! The answer of the problem is actually very simple! But try not to look at the answer below. The following is a table I spend about 15 minutes to calculate manually. Let's see if you can find the answer on your own. To save some space, we suppose that $x$ is not greater than $y$.

|  $n$  |  $x$  |  $y$  | $x+y$ |  Min  |  Max  |
| :---: | :---: | :---: | :---: | :---: | :---: |
|  $1$  |  $1$  |  $1$  |  $2$  |  $1$  |  $1$  |
|  $2$  |  $1$  |  $1$  |  $2$  |  $1$  |  $1$  |
|  $2$  |  $1$  |  $2$  |  $3$  |  $2$  |  $2$  |
|  $2$  |  $2$  |  $2$  |  $4$  |  $2$  |  $2$  |
|  $3$  |  $1$  |  $1$  |  $2$  |  $1$  |  $1$  |
|  $3$  |  $1$  |  $2$  |  $3$  |  $1$  |  $2$  |
|  $3$  |  $1$  |  $3$  |  $4$  |  $2$  |  $3$  |
|  $3$  |  $2$  |  $2$  |  $4$  |  $2$  |  $3$  |
|  $3$  |  $2$  |  $3$  |  $5$  |  $3$  |  $3$  |
|  $3$  |  $3$  |  $3$  |  $6$  |  $3$  |  $3$  |
|  $4$  |  $1$  |  $1$  |  $2$  |  $1$  |  $1$  |
|  $4$  |  $1$  |  $2$  |  $3$  |  $1$  |  $2$  |
|  $4$  |  $1$  |  $3$  |  $4$  |  $1$  |  $3$  |
|  $4$  |  $2$  |  $2$  |  $4$  |  $1$  |  $3$  |
|  $4$  |  $1$  |  $4$  |  $5$  |  $2$  |  $4$  |
|  $4$  |  $2$  |  $3$  |  $5$  |  $2$  |  $4$  |
|  $4$  |  $2$  |  $4$  |  $6$  |  $3$  |  $4$  |
|  $4$  |  $3$  |  $3$  |  $6$  |  $3$  |  $4$  |
|  $4$  |  $3$  |  $4$  |  $7$  |  $4$  |  $4$  |
|  $4$  |  $4$  |  $4$  |  $8$  |  $4$  |  $4$  |
|  $5$  |  $1$  |  $1$  |  $2$  |  $1$  |  $1$  |
|  $5$  |  $1$  |  $2$  |  $3$  |  $1$  |  $2$  |
|  $5$  |  $1$  |  $3$  |  $4$  |  $1$  |  $3$  |
|  $5$  |  $2$  |  $2$  |  $4$  |  $1$  |  $3$  |
|  $5$  |  $1$  |  $4$  |  $5$  |  $1$  |  $4$  |
|  $5$  |  $2$  |  $3$  |  $5$  |  $1$  |  $4$  |
|  $5$  |  $1$  |  $5$  |  $6$  |  $2$  |  $5$  |
|  $5$  |  $2$  |  $4$  |  $6$  |  $2$  |  $5$  |
|  $5$  |  $3$  |  $3$  |  $6$  |  $2$  |  $5$  |
|  $5$  |  $2$  |  $5$  |  $7$  |  $3$  |  $5$  |
|  $5$  |  $3$  |  $4$  |  $7$  |  $3$  |  $5$  |
|  $5$  |  $3$  |  $5$  |  $8$  |  $4$  |  $5$  |
|  $5$  |  $4$  |  $4$  |  $8$  |  $4$  |  $5$  |
|  $5$  |  $4$  |  $5$  |  $9$  |  $5$  |  $5$  |
|  $5$  |  $5$  |  $5$  | $10$  |  $5$  |  $5$  |

When <data value="v{x}o{+}v{y}o{&le;}v{n}"></data>, the minimum overall place seems to be $1$ and the maximum overall place seems to be <data value="o{(}v{x}o{+}v{y}o{-}c{1}o{)}"></data>. When <data value="v{x}o{+}v{y}o{&gt;}v{n}"></data>, the minimum overall place seems to be <data value="o{min}o{(}v{n}o{,}v{x}o{+}v{y}o{+}c{1}o{-}v{n}o{)}"></data> (when <data value="v{x}o{=}v{y}o{=}v{n}"></data> the minimum overall place is $n$ but not and cannot be <data value="o{(}v{n}o{+}c{1}o{)}"></data>) and the maximum overall place seems to be $n$. And that's the correct answer! But why?

Firstly, let me explain why the minimum overall place can be $1$ when <data value="v{x}o{+}v{y}o{&le;}v{n}"></data> and why the maximum overall place can be $n$ when <data value="v{x}o{+}v{y}o{&gt;}v{n}"></data>. Suppose the contestant who got the first place in the first round got the last place in the second round, the contestant who got the second place go the second last place in the second round and so on. The contestant who got the $i$-th place in the first round got the <data value="o{(}v{n}o{+}c{1}o{-}v{i}o{)}"></data>-th place in the second so that all contestant got the same score, which is <data value="o{(}v{n}o{+}c{1}o{)}"></data>, and everyone got the last place. Now we swap two certain contestants' rank in th second round to craft a combination in the problem. This will make one contestant's score less than <data value="o{(}v{n}o{+}c{1}o{)}"></data> and another one's score greater than <data value="o{(}v{n}o{+}c{1}o{)}"></data>. So now the one with his score less than <data value="o{(}v{n}o{+}c{1}o{)}"></data> will be the first and the one with his score greater than <data value="o{(}v{n}o{+}c{1}o{)}"></data> will be the last. Of course no one can got a place better than the first or worse than the last. So for whom scores not less than <data value="o{(}v{n}o{+}c{1}o{)}"></data> (greater than $n$) overall, his maximum overall place will be $n$. For whom scores less than <data value="o{(}v{n}o{+}c{1}o{)}"></data> (greater than $n$) overall, his minimum overall place will be $1$.

The we focus on the others. For whose score is <data value="v{s}o{(}v{s}o{&le;}v{n}o{)}"></data>, those whom score at least $s$ in a single round is hopeless to contribute his maximum overall place and we could make whom score at least <data value="v{s}}"></data> in a round score at least $s$ in the other round and kick them out. In this way, there will remains <data value="o{(}v{s}o{-}c{1}o{)}"></data> contestants. Each of them will probably score at most $s$ in a single round. So now we can use the way in the last paragraph to make everyone's score exactly $s$. So who scores not greater than $n$ can get a maximum overall place of <data value="o{(}v{s}o{-}c{1}o{)}"></data>. And vice versa. For whose score is <data value="v{s}o{(}v{s}o{&gt;}v{n}o{)}"></data>, after kicking <data value="o{min}o{(}v{n}o{-}c{1}o{,}v{s}o{-}v{n}o{)}"></data> contestants who must be in front of him, he could get a minimum overall place of <data value="o{min}o{(}v{n}o{,}v{s}o{+}c{1}o{-}v{n}o{)}"></data>.

## Code

- [Solution](CF.1313B.0.cpp)
