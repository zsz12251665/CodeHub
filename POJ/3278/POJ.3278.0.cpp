#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 1.4e5;
int time[SIZE], queue[SIZE]; // The time array keeps the time to reach the point
int main()
{
	memset(time, -1, sizeof time); // Initialize the time array
	int n, k;
	scanf("%d%d", &n, &k);
	time[n] = 0;
	queue[0] = n;
	int head = 0, foot = 1;
	while (head != foot) // BFS part
	{
		int x = queue[head++];
		head %= SIZE;
		if (x == k)
			break;
		if (x < SIZE && time[x + 1] == -1) // x + 1
		{
			time[x + 1] = time[x] + 1;
			queue[foot++] = x + 1;
			foot %= SIZE;
		}
		if (x > 0 && time[x - 1] == -1) // x - 1
		{
			time[x - 1] = time[x] + 1;
			queue[foot++] = x - 1;
			foot %= SIZE;
		}
		if (2 * x < SIZE && time[2 * x] == -1) // 2 * x
		{
			time[2 * x] = time[x] + 1;
			queue[foot++] = 2 * x;
			foot %= SIZE;
		}
	}
	printf("%d", time[k]);
	return 0;
}
