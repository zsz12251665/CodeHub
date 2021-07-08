#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
const int SIZE = 1.4e5;
int time[SIZE]; // The time array keeps the time to reach the point
int main()
{
	memset(time, -1, sizeof time); // Initialize the time array
	int n, k;
	scanf("%d%d", &n, &k);
	time[n] = 0;
	queue<int> q;
	q.push(n);
	while (!q.empty()) // BFS part
	{
		int x = q.front();;
		q.pop();
		if (x == k)
			break;
		if (x < SIZE && time[x + 1] == -1) // x + 1
		{
			time[x + 1] = time[x] + 1;
			q.push(x + 1);
		}
		if (x > 0 && time[x - 1] == -1) // x - 1
		{
			time[x - 1] = time[x] + 1;
			q.push(x - 1);
		}
		if (2 * x < SIZE && time[2 * x] == -1) // 2 * x
		{
			time[2 * x] = time[x] + 1;
			q.push(2 * x);
		}
	}
	printf("%d", time[k]);
	return 0;
}
