#include <cstdio>
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	++n;
	++m;
	long long ans = (long long)n * m * (n * m - 1) * (n * m - 2) / 6;
	for (int i = 1; i < n; ++i) // Pick up the combinations on the same row
		ans -= (long long)(n - i) * m * (i - 1);
	for (int j = 1; j < m; ++j) // Pick up the combinations on the same column
		ans -= (long long)(m - j) * n * (j - 1);
	for (int i = 1; i < n; ++i) // Pick up the combinations on the leaning lines
		for (int j = 1; j < m; ++j)
			ans -= 2ll * (n - i) * (m - j) * (gcd(i, j) - 1);
	printf("%lld", ans);
	return 0;
}
