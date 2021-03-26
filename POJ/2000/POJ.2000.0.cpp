#include <cstdio>
using namespace std;
int main()
{
	int k;
	for (scanf("%d", &k); k != 0; scanf("%d", &k))
	{
		printf("%d ", k);
		int ans = 0;
		for (int i = 1; k > 0; ++i)
			for (int j = 0; j < i; ++j)
				if (k > 0) // Do not forget to check if k equals 0 in the loop, or you may give too much coins
				{
					ans += i;
					--k;
				}
		printf("%d\n", ans);
	}
	return 0;
}
