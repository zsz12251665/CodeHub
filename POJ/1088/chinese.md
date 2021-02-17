# POJ 1088

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-1088)
- [POJ](http://poj.org/problem?id=1088)

## 解法

First of all, I thought it can be solved by a <abbr title="Breadth-First Search">BFS</abbr> from the lowest point. And I got a <abbr title="Wrong Answer">WA</abbr>. However, I didn't realize my mistake until someone told me a possible situation like <data value="m{c{8}l{}c{4}}o{&nbsp;}m{c{9}l{}c{5}}o{&nbsp;}m{c{1}l{}c{6}}o{&nbsp;}m{c{8}l{}c{7}}o{&nbsp;}m{c{8}l{}c{8}}"></data>. 

Obviously, the longest length is 5. But it is not from the highest point or the lowest. I have to search every point to make sure the length I find is the longest. So I use a kind of memorable search to make the time shorter. So when I search a point, if it has been searched, the search function will return the answer immediately. Or it will search the four points beside it and return the longest length plus 1. That means <data value="v{length}b{v{x}o{,}v{y}}o{=}o{max}o{(}v{length}b{v{x}o{-}c{1}o{,}v{y}}o{,}v{length}b{v{x}o{,}v{y}o{-}c{1}}o{,}v{length}b{v{x}o{+}c{1}o{,}v{y}}o{,}v{length}b{v{x}o{,}v{y}o{+}c{1}}o{)}o{+}c{1}"></data>. 

## 代码

- [正解](POJ.1088.0.cpp)
