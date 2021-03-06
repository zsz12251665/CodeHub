# POJ 2965

## 描述

- [Virtual Judge](https://vjudge.net/problem/POJ-2965)
- [POJ](http://poj.org/problem?id=2965)

## 解法

Well, first of all, we can get some information from the description. Firstly, your action on a handle have two stages: do and not do. That is because every twice you do on the same handle, it is as same as what it is like when you haven't do. Secondly, if you do on all the handles on the row <data value="v{i}"></data> and column <data value="v{j}"></data>, it will just change the stage of <data value="o{(}v{i}o{,}v{j}o{)}"></data>. That is because the handles which are not on row <data value="v{i}"></data> or column <data value="v{j}"></data> had been change twice. For example, <data value="o{(}v{a}o{,}v{b}o{)}"></data> was change when doing on <data value="o{(}v{i}o{,}v{b}o{)}"></data> and doing on <data value="o{(}v{a}o{,}v{j}o{)}"></data>. And the handles on the row <data value="v{i}"></data> or column <data value="v{j}"></data> (not include <data value="o{(}v{i}o{,}v{j}o{)}"></data>) had been change 4 times(when doing on <data value="o{(}v{i}o{,}c{1}o{)}"></data>, <data value="o{(}v{i}o{,}c{2}o{)}"></data>, <data value="o{(}v{i}o{,}c{3}o{)}"></data>, <data value="o{(}v{i}o{,}c{4}o{)}"></data> or when doing on <data value="o{(}c{1}o{,}v{j}o{)}"></data>, <data value="o{(}c{2}o{,}v{j}o{)}"></data>, <data value="o{(}c{3}o{,}v{j}o{)}"></data>, <data value="o{(}c{4}o{,}v{j}o{)}"></data>). <data value="o{(}v{i}o{,}v{j}o{)}"></data> had been change for 7 times (every change has covered on <data value="o{(}v{i}o{,}v{j}o{)}"></data>), which is the only one that was changed odd times. 

With the information above, the solution is very clear. First of all, scan the handles. Whenever finding a '+' on <data value="o{(}v{i}o{,}v{j}o{)}"></data>, do on every handle on the row <data value="v{i}"></data> and column <data value="v{j}"></data>. If it was done, then undo it. The information of whether it was done will be kept in the <data value="v{done}"></data> array. After the scanning, count the number of the handles that are done. And then, print the number and the coordinates of the handles that are done. 

## 代码

- [正解](POJ.2965.0.cpp)
