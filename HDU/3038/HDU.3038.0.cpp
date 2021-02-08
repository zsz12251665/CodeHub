#include <cstdio>
using namespace std;
const int SIZE = 2e5 + 1;
int f[SIZE];
long long d[SIZE]; // d[i] is the difference of the prefix sum to the i-th and the prefix sum to the f[i]-th
int find(int p)
{
	if (f[p] == p)
		return p;
	int fp = find(f[p]);
	d[p] += d[f[p]];
	return f[p] = fp;
}
bool merge(int a, int b, int s)
{
	int fa = find(a), fb = find(b);
	if (fa == fb) // The relationship is clear
		return d[b] - d[a] != s; // Find a wrong answer
	d[fb] = s + d[a] - d[b];
	f[fb] = fa;
	return false;
}
int main()
{
	for (int n, m; scanf("%d%d", &n, &m) != EOF;)
	{
		for (int i = 0; i <= n; ++i) // Initialize the disjoint set and the difference
		{
			f[i] = i;
			d[i] = 0;
		}
		int ans = 0;
		for (int i = 0, a, b, s; i < m; ++i)
		{
			scanf("%d%d%d", &a, &b, &s);
			ans += merge(a - 1, b, s) ? 1 : 0;
		}
		printf("%d\n", ans);
	}
	return 0;
}
