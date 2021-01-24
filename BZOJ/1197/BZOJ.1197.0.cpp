#include <cstdio>
using namespace std;
long long ans[16][101]; // ans[n][m] keeps the number of kinds of flowers
int main()
{
	int n, m;
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= n; ++i) // m == 0
		ans[i][0] = 1;
	for (int j = 1; j <= m; ++j) // n == 1
		ans[1][j] = 2 * j;
	for (int i = 2; i <= n; ++i) // n > 1 && m > 0
		for (int j = 1; j <= m; ++j)
			ans[i][j] = ans[i - 1][j - 1] + ans[i][j - 1];
	printf("%lld", ans[n][m]);
	return 0;
}
