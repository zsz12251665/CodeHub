#include <cstdio>
#include <deque>
using namespace std;
const int SIZE = 1e6 + 1;
int a[SIZE];
deque<int> q; // The monotonous queue which keeps the indexes of the values
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	q.clear();
	for (int i = 0; i < n; ++i)
	{
		while (!q.empty() && a[i] < a[q.back()]) // Pop out the elements in the end to keep the queue monotonous
			q.pop_back();
		while (!q.empty() && q.front() <= i - k) // Pop out the elements in the front that has been out of the range
			q.pop_front();
		q.push_back(i);
		if (i >= k - 1)
			printf("%d ", a[q.front()]); // Print the minimum elements
	}
	putchar('\n');
	q.clear();
	for (int i = 0; i < n; ++i)
	{
		while (!q.empty() && a[i] > a[q.back()]) // Change the comparer to reverse the order
			q.pop_back();
		while (!q.empty() && q.front() <= i - k)
			q.pop_front();
		q.push_back(i);
		if (i >= k - 1)
			printf("%d ", a[q.front()]); // Print the maximum elements
	}
	return 0;
}
