#include <cstdio>
using namespace std;
const int MAX_N = 15;
const int MAX_M = 1000;
const int MAXINT = 2147483647;
int h[MAX_N], d[MAX_N], q[MAX_N]; // To enable current edge optimization, add an array cur[MAX_N] to record the latest edge we access from each point
int des[2 * MAX_M], nxt[2 * MAX_M], flow[2 * MAX_M];
int n, m;
void bfs(int s, int t)
{
	for (int i = 0; i < n; ++i) // Reset the levels. To enable current edge optimization, reset the cur array by adding "cur[i] = h[i];" in the loop
		d[i] = n; // d[i] == n means that you cannot reach the end point from this point
	int head = 0, foot = 1; // Push the end point into the queue
	q[0] = t;
	d[t] = 0;
	while (head != foot)
	{
		int p = q[head];
		head = (head + 1) % MAX_N;
		for (int i = h[p]; i != -1; i = nxt[i])
			if (d[des[i]] == n && flow[(i % 2 == 1) ? i - 1 : i + 1] > 0) // Find a new point
			{
				d[des[i]] = d[p] + 1; // Set the level
				q[foot] = des[i]; // Push it into the queue
				foot = (foot + 1) % MAX_N;
			}
	}
}
int dfs(int p, int t, int f) // f is the maximum flow available from the start point to point p
{
	if (p == t) // Reach the end point
		return f;
	for (int i = h[p]; i != -1; i = nxt[i]) // To enable current edge optimization, use "for(int i = cur[p]; i != -1; i = nxt[i])" instead to start from the latest edge accessed
		if (d[des[i]] + 1 == d[p] && flow[i] > 0)
		{
			int tmp = dfs(des[i], t, (f < flow[i]) ? f : flow[i]);
			if (tmp > 0) // Find a new augment path
			{
				flow[i] -= tmp; // Update the edge
				flow[(i % 2 == 1) ? i - 1 : i + 1] += tmp; // Update the inverse edge
				return tmp;
			}
		}
	return 0;
}
int main()
{
	int t;
	scanf("%d", &t);
	for (int ti = 1; ti <= t; ++ti)
	{
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; ++i)
			h[i] = -1;
		for (int i = 0, u, v, w; i < m; ++i)
		{
			scanf("%d%d%d", &u, &v, &w);
			des[2 * i] = v - 1; // Build the edge
			nxt[2 * i] = h[u - 1];
			flow[2 * i] = w;
			h[u - 1] = 2 * i;
			des[2 * i + 1] = u - 1; // Build the inverse edge
			nxt[2 * i + 1] = h[v - 1];
			flow[2 * i + 1] = 0;
			h[v - 1] = 2 * i + 1;
		}
		int ans = 0;
		for (bfs(0, n - 1); d[0] < n; bfs(0, n - 1)) // Run BFS until the start point and the end point is not connected
			for (int tmp = dfs(0, n - 1, MAXINT); tmp > 0; tmp = dfs(0, n - 1, MAXINT)) // Keep trying until we cannot find a new augment path
				ans += tmp;
		printf("Case %d: %d\n", ti, ans);
	}
	return 0;
}
