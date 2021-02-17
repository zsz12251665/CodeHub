# POJ 2388

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-2388)
- [POJ](http://poj.org/problem?id=2388)

## Solution

This problem is solved by sorting the array and print the middle one. Here are some popular sorting algorithms.

[Insertion Sort](POJ.2388.0.cpp): This is an $\operatorname{O}(n^2)$ algorithm. It sorts the array like sorting poker cards. You pick up one card, then put it at the right place in your hand. Both Insertion sort and Bubble sort is simple, but not efficient.

[Bubble Sort](POJ.2388.1.cpp): This is an $\operatorname{O}(n^2)$ algorithm too. You need to scan $n$ times of your array according to the algorithm. Every time you scan it, you find the biggest element and put it at the end, just like the big bubbles come up at first.

[Quick Sort](POJ.2388.2.cpp): This is an $\operatorname{O}(n\log{n})$ algorithm. It is efficient, but in the worst case, it makes $\operatorname{O}(n^2)$ comparisons, though this behavior is rare. Quick sort is a divide and conquer algorithm. Firstly, you divide the array into two smaller sub-arrays: the low elements and the high elements. Then you recursively sort the sub-arrays until the sizes of the sub-arrays are 0 or 1.

[Merge Sort](POJ.2388.3.cpp): This is an $\operatorname{O}(n\log{n})$ algorithm too. The main difference between Quick sort and Merge Sort is that Merge sort is stable in order and time while Quick sort is not. It is also a divide and conquer algorithm. You first divide the array into two sub-arrays, then sort them unless their sizes are 0 or 1 and lastly merge the two sub-arrays up by the smaller head element into the big array until all of them are put.

[Heap Sort](POJ.2388.4.cpp): As same as its name, Heap sort is a sorting algorithm with the data structure heap. As we all know that heap can add or pop an element in$\operatorname{O}(\log{n})$, the time complexity of all is $\operatorname{O}(n\log{n})$.

[Counting Sort](POJ.2388.5.cpp): Counting sort is an algorithm for sorting a collection of small integers. The time complexity is $\operatorname{O}(n+k)$ ($k$ is the data range). You need to set up another array $c$. Then you scan the data array to count the numbers of every integers in the data range with a time complexity of $\operatorname{O}(n)$. In the end scan the array $c$ and print the sorted data.

## Code

- [Insertion Sort](POJ.2388.0.cpp)
- [Bubble Sort](POJ.2388.1.cpp)
- [Quick Sort](POJ.2388.2.cpp)
- [Merge Sort](POJ.2388.3.cpp)
- [Heap Sort](POJ.2388.4.cpp)
- [Counting Sort](POJ.2388.5.cpp)
