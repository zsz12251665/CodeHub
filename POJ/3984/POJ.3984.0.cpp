#include <cstdio>
#include <queue>
using namespace std;
const int SIZE = 25;
int a[SIZE], p[SIZE]; // To make the queue simple, we use one-dimensional array with (x,y) as a[5 * x + y]
int main()
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &a[i]);
		if (a[i] == 1)
			p[i] = -2;
		else
			p[i] = -1;
	}
	queue<int> q;
	q.push(24);
	p[24] = 24;
	while (!q.empty()) // Make the BFS tree
	{
		if (q.front() % 5 > 0 && p[q.front() - 1] == -1) // Go left
		{
			q.push(q.front() - 1);
			p[q.front() - 1] = q.front();
		}
		if (q.front() % 5 < 4 && p[q.front() + 1] == -1) // Go right
		{
			q.push(q.front() + 1);
			p[q.front() + 1] = q.front();
		}
		if (q.front() / 5 > 0 && p[q.front() - 5] == -1) // Go up
		{
			q.push(q.front() - 5);
			p[q.front() - 5] = q.front();
		}
		if (q.front() / 5 < 4 && p[q.front() + 5] == -1) // Go down
		{
			q.push(q.front() + 5);
			p[q.front() + 5] = q.front();
		}
		q.pop();
	}
	for (int i = 0; i != 24; i = p[i]) // Print the path
		printf("(%d, %d)\n", i / 5, i % 5);
	printf("(4, 4)");
	return 0;
}
