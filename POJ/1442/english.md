# POJ 1442

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-1442)
- [POJ](http://poj.org/problem?id=1442)

## Solution

Well, this problem requires two heaps. One is the small-root heap and the other one is the big-root heap. Then we do it like this: When we have processed <data value="v{j}"></data> GET requests, we keep the smallest <data value="v{j}"></data> integers in the big-root array. When an ADD request is taken, we could know whether the new integer is one of the smallest <data value="v{j}"></data> integers by comparing the root of the heap and the new element. If it is, replace the root with the new element and put the old root into the small-root heap. Otherwise, just put the new element into the small-root heap. So the <data value="o{(}v{j}o{+}c{1}o{)}"></data>-th smallest element will be the root of the small-root heap. So we can process an ADD request within <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. When a GET request is taken, all we need to do is moving the root of the small-root heap into the big-root heap. This can be finished in <data value="o{O}o{(}o{lg}v{n}o{)}"></data> too. So the total time complexity is <data value="o{O}o{(}o{lg}v{n}o{)}"></data>.

At the same time, this solution is also going to tell you that how to make a heap. The heap is a complete binary tree structure which all nodes except the roots is smaller(or bigger) than its father. That's why we have the small-root heap and the big-root heap. If the nodes are smaller than their fathers, the root will be the smallest of all. That is called small-root heap. Similarly, we have the big-root heap. In the following we use the small-root heap as an example. When a new element is added to the heap, put it at the end of the tree and compare it with his father. If the father isn't so small as the child, swap them and continue comparing. Otherwise, stopped and quit. There are <data value="o{&lceil;}o{log}b{2}v{n}o{&rceil;}"></data> levels in the heap, so the add request is <data value="o{O}o{(}o{lg}v{n}o{)}"></data>. When we need to pop the root out of the heap, we can replace it with the last element of the heap. Then we compare with its smallest child and if the father is bigger, swap them, or stopped and quit. So the time complexity of the pop request is also related to the number of the levels. So the pop request is <data value="o{O}o{(}o{lg}v{n}o{)}"></data> too. So with a heap, you can add or pop an element with a <data value="o{O}o{(}o{lg}v{n}o{)}"></data> time complexity and get the smallest element with a <data value="o{O}o{(}c{1}o{)}"></data> time complexity.

## Code

- [Solution](POJ.1442.0.cpp)
