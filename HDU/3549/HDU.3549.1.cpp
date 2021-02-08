#include <cstdio>
using namespace std;
const int MAX_N = 15;
const int MAX_M = 1000;
const int MAXINT = 2147483647;
int h[MAX_N], pre[MAX_N], q[MAX_N]; // The pre array is used to record from which edge the point is
bool visited[MAX_N];
int des[2 * MAX_M], nxt[2 * MAX_M], flow[2 * MAX_M];
int n, m;
int bfs(int s, int t)
{
	int head = 0, foot = 1;
	for (int i = 0; i < n; ++i)
	{
		pre[i] = -1;
		visited[i] = false;
	}
	q[0] = s; // Push the start point into the queue
	visited[s] = true;
	while (head != foot)
	{
		int p = q[head];
		head = (head + 1) % MAX_N;
		for (int i = h[p]; i != -1; i = nxt[i])
			if (!visited[des[i]] && flow[i] > 0) // Find a new point
			{
				visited[des[i]] = true;
				pre[des[i]] = i;
				if (des[i] == t) // Reach the end point
				{
					int ans = MAXINT;
					for (int j = pre[t]; j != -1; j = pre[des[(j % 2 == 1) ? j - 1 : j + 1]]) // Trace back to find the bottleneck edge
						if (ans > flow[j])
							ans = flow[j];
					for (int j = pre[t]; j != -1; j = pre[des[(j % 2 == 1) ? j - 1 : j + 1]])
					{
						flow[j] -= ans; // Update the edge
						flow[(j % 2 == 1) ? j - 1 : j + 1] += ans; // Update the inverse edge
					}
					return ans;
				}
				q[foot] = des[i]; // Push it into the queue
				foot = (foot + 1) % MAX_N;
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
		for (int tmp = bfs(0, n - 1); tmp > 0; tmp = bfs(0, n - 1)) // Keep trying until we cannot find a new augment path
			ans += tmp;
		printf("Case %d: %gd\n", ti, ans);
	}
	return 0;
}
