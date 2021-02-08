#include <algorithm>
#include <cstdio>
using namespace std;
const int SIZE = 1000;
int king[SIZE], tian[SIZE];
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n;
	for (scanf("%d", &n); n != 0; scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
			scanf("%d", &tian[i]);
		for (int i = 0; i < n; ++i)
			scanf("%d", &king[i]);
		sort(tian, tian + n, cmp);
		sort(king, king + n, cmp);
		int ans = 0, king_best = 0, tian_best = 0, king_worst = n - 1, tian_worst = n - 1;
		for (int i = 0; i < n; ++i) // The greedy part
		{
			if (tian[tian_worst] > king[king_worst])
			{
				++ans;
				--tian_worst;
				--king_worst;
				continue;
			}
			if (tian[tian_worst] < king[king_worst])
			{
				--ans;
				--tian_worst;
				++king_best;
				continue;
			}
			if (tian[tian_best] > king[king_best])
			{
				++ans;
				++tian_best;
				++king_best;
				continue;
			}
			if (tian[tian_worst] < king[king_best])
				--ans;
			if (tian[tian_worst] > king[king_best])
				++ans;
			--tian_worst;
			++king_best;
		}
		printf("%d\n", ans * 200);
	}
	return 0;
}
