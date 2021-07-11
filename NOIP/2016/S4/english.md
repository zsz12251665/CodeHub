# NOIP 2016S4

## Description

- [Luogu](https://www.luogu.com.cn/problem/P2822)
- [Vijos](https://www.vijos.org/p/2006)

## Solution

When I saw the combination, I got some idea of the Pascal Triangle, which I can get <data value="o{C}i{v{n}l{}v{m}}"></data> in <data value="o{O}o{(}v{n}o{}v{m}o{)}"></data>. Then we can preprocess the whole Pascal Triangle, and when I need them, I can get it in <data value="o{O}o{(}c{1}o{)}"></data>. So the whole time complexity would be <data value="o{O}o{(}v{n}o{}v{m}o{}v{t}o{)}"></data>. But it still seems too slow. Then I found that I can make a prefix sum to keep the numbers of fit combinations that I can search a line in <data value="o{O}o{(}c{1}o{)}"></data>. So the total time complexity would be <data value="o{O}o{(}v{n}o{}o{(}v{m}o{+}v{t}o{)}o{)}"></data> this time.

## Code

- [Solution](NOIP.2016S4.0.cpp)
