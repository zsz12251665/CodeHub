#include <cstdio>
using namespace std;
const int SIZE = 25;
int field[SIZE], parent[SIZE]; // To make the queue simple, we use one-dimensional array with (x,y) as field[5 * x + y]
int queue[SIZE];
int main()
{
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &field[i]);
		if (field[i] == 1)
			parent[i] = -2;
		else
			parent[i] = -1;
	}
	queue[0] = parent[24] = 24;
	int head = 0, foot = 1;
	while (head < foot) // Make the BFS tree
	{
		if (queue[head] % 5 > 0 && parent[queue[head] - 1] == -1) // Go left
		{
			queue[foot++] = queue[head] - 1;
			parent[queue[head] - 1] = queue[head];
		}
		if (queue[head] % 5 < 4 && parent[queue[head] + 1] == -1) // Go right
		{
			queue[foot++] = queue[head] + 1;
			parent[queue[head] + 1] = queue[head];
		}
		if (queue[head] / 5 > 0 && parent[queue[head] - 5] == -1) // Go up
		{
			queue[foot++] = queue[head] - 5;
			parent[queue[head] - 5] = queue[head];
		}
		if (queue[head] / 5 < 4 && parent[queue[head] + 5] == -1) // Go down
		{
			queue[foot++] = queue[head] + 5;
			parent[queue[head] + 5] = queue[head];
		}
		++head;
	}
	for (int i = 0; i != 24; i = parent[i]) // Print the path
		printf("(%d, %d)\n", i / 5, i % 5);
	printf("(4, 4)");
	return 0;
}
