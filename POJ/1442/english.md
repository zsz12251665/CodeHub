# POJ 1442

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-1442)
- [POJ](http://poj.org/problem?id=1442)

## Solution

This problem requires two heaps, a min heap and a max heap. Then we do it like this: When we have processed $j$ GET requests, we keep the smallest $j$ integers in the max heap. When an ADD request is taken, we could know whether the new integer is one of the smallest $j$ integers by comparing the root of the heap and the new one. If it is, pop the root, push the new integer and put the old root into the min heap. Otherwise, just put the new integer into the min heap. So the $(j+1)$-th smallest integer will be the root of the min heap. So we can process an ADD request within $\operatorname{O}(\log{n})$. When a GET request is taken, all we need to do is moving the root of the min heap into the max heap. This can be finished in $\operatorname{O}(\log{n})$ too. So the total time complexity is $\operatorname{O}(n\log{n})$.

At the same time, this solution is also going to tell you that how to make a heap. The heap is a complete binary tree structure which all nodes except the roots is smaller (or bigger) than its father. That's the difference between the min heap and the max heap. If the nodes are smaller than their fathers, the root will be the minimum of all. That is called min heap. Similarly, we have the max heap. In the following we use the min heap as an example. When a new element is added to the heap, it is put at the end of the tree and compare it with his father. If the father is larger, swap them and continue comparing until its father is smaller. This is called shift up. There are $\lceil\log_2n\rceil$ levels in the heap, so the add request is $\operatorname{O}(\log{n})$. When we need to pop the root out of the heap, we can replace it with the last element of the heap. Then we compare with its smallest child and if the father is bigger, swap them and continue, otherwise stop. This is called shift down. So the time complexity of the pop request is also related to the number of the levels. So the pop request is $\operatorname{O}(\log{n})$ too. So with a heap, you can add or pop an element with a $\operatorname{O}(\log{n})$ time complexity and get the smallest element with a $\operatorname{O}(1)$ time complexity.

## Code

- [Solution](POJ.1442.0.cpp)
