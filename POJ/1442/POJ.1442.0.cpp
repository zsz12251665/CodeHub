#include <cstdio>
#include <utility>
using namespace std;
const int SIZE = 3e4; // Might need to plus 1 when submitted in G++
int a[SIZE], u[SIZE];
template<bool (*cmp)(int, int)> // We are taking a function as a template parameter here
struct heap // The heap template
{
	int a[SIZE];
	int size;
	heap() : size(0) {}
	int top()
	{
		return a[0];
	}
	void push(int v)
	{
		int p = size++;
		a[p] = v;
		while (p > 0 && cmp(a[(p - 1) / 2], a[p])) // Shift up
		{
			swap(a[(p - 1) / 2], a[p]);
			p = (p - 1) / 2;
		}
	}
	void pop()
	{
		int p = 0;
		a[p] = a[--size];
		while (2 * p + 1 < size && cmp(a[p], a[2 * p + 1]) || 2 * p + 2 < size && cmp(a[p], a[2 * p + 2])) // Shift down
		{
			p = 2 * p + 2 < size && cmp(a[2 * p + 1], a[2 * p + 2]) ? 2 * p + 2 : 2 * p + 1;
			swap(a[(p - 1) / 2], a[p]);
		}
	}
};
bool less(int a, int b) // The comparing function is with respect to the priority queue
{
	return a < b;
}
bool greater(int a, int b)
{
	return a > b;
}
heap<less> maxHeap;
heap<greater> minHeap;
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; ++i)
		scanf("%d", &a[i]);
	for (int j = 0; j < n; ++j)
		scanf("%d", &u[j]);
	for (int i = 0, j = 0; i < m && j < n; ++i)
	{
		if (j > 0 && a[i] < maxHeap.top()) // The ADD request which started with checking if the new element should be put into the max heap
		{
			minHeap.push(maxHeap.top()); // Put the root element of the max heap into the min heap
			maxHeap.pop(); // Replace the root element of the max heap with the new element
			maxHeap.push(a[i]);
		}
		else
			minHeap.push(a[i]); // Simply add the new element into the min heap
		for (; i + 1 == u[j]; ++j) // The GET request
		{
			printf("%d\n", minHeap.top());
			maxHeap.push(minHeap.top()); // Move the root element of the min heap to the max heap
			minHeap.pop();
		}
	}
	return 0;
}
