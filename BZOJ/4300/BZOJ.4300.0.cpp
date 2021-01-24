#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int f[32];
int main()
{
	int n, ans = 0;
	memset(f, 0, sizeof f);
	scanf("%ld", &n);
	for (int i = 0; i < n; ++i)
	{
		int a, max_f = -1;
		scanf("%ld", &a);
		for (int j = 0; j < 32; ++j) // Find the length of the longest subsequence that a[i] can append
			if ((a >> j) % 2 != 0)
				max_f = max(max_f, f[j]);
		++max_f;
		ans = max(ans, max_f); // Update the answer
		for (int j = 0; j < 32; ++j) // Update the dp array
			if ((a >> j) % 2 != 0)
				f[j] = max(f[j], max_f);
	}
	printf("%ld", ans);
	return 0;
}
