#include <algorithm>
#include <cstdio>
using namespace std;
const int SIZE = 1000;
int j[SIZE], f[SIZE], ord[SIZE];
int main()
{
	int m, n;
	for (scanf("%d%d", &m, &n); m != -1 && n != -1; scanf("%d%d", &m, &n))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &j[i], &f[i]);
			ord[i] = i;
		}
		sort(ord, ord + n, [](int a, int b) { return j[a] * f[b] > j[b] * f[a]; }); // Not using j[a] / f[a] > j[b] / f[b] is to avoid dividing 0
		int i = 0, ans = 0;
		for (; i < n && m > f[ord[i]]; ++i) // Take the JavaBeans from high rewards to low ones
		{
			ans += j[ord[i]];
			m -= f[ord[i]];
		}
		if (i < n)
			printf("%.3lf\n", ans + (double)m / f[ord[i]] * j[ord[i]]);
		else
			printf("%d.000\n", ans); // Do not forget the 3 numbers after the digit
	}
	return 0;
}
