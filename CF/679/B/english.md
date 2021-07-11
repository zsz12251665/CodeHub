# CF 679B

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-679B)
- [Luogu](https://www.luogu.com.cn/problem/CF679B)
- [Codeforces](https://codeforces.com/problemset/problem/679/B)

## Solution

First of all, we find the maximum $a$ that <data value="v{a}p{3}"></data> is not greater than $m$. And the first block must have side $a$ or <data value="o{(}v{a}o{-}c{1}o{)}"></data>. That is because if we use <data value="o{(}v{a}o{-}c{2}o{)}"></data> or smaller integers. It must be smaller than using <data value="o{(}v{a}o{-}c{1}o{)}"></data> because the first block can be replaced by a block with side <data value="o{(}v{a}o{-}c{1}o{)}"></data>. But why <data value="o{(}v{a}o{-}c{1}o{)}"></data> cannot be replaced by $a$? Fox example, if we've an $m$ which equals $9$, then $a$ would be $2$. But we know that the maximum number of the blocks is $7$, which is <data value="o{(}c{1}p{3}o{+}c{1}p{3}o{+}c{1}p{3}o{+}c{1}p{3}o{+}c{1}p{3}o{+}c{1}p{3}o{+}c{1}p{3}o{)}"></data>. So we may have more volumes to make a higher tower when we use the block with side <data value="o{(}v{a}o{-}c{1}o{)}"></data>.

Secondly, I have to remind you that when you pick up a block of with side $a$, the total volume of rest part should not be greater than <data value="o{(}o{(}v{a}o{-}c{1}o{)}p{3}o{-}v{a}p{3}o{)}"></data>, or this block is a illegal block because it is not the biggest block that can be taken. So when we choose to take the block with side $a$ or <data value="o{(}v{a}o{-}c{1}o{)}"></data>, the volume remained are very important. The more volume remained, the higher tower we can build. So we should pick up the larger one.

After getting to know which block should we choose, we get the answer. After getting $m$, repeat choosing the most suitable block and remove it from the maximum volume or reset $m$ until it is reduced to $0$.

## Code

- [Solution](CF.679B.0.cpp)
