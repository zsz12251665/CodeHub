#include <cstdio>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
void qsort(int l, int r)
{
	int x = l, y = r, std = milk[(l + r) / 2];
	while (x < y)
	{
		while (milk[x] < std) // Replace this line with "while (milk[x] > std)" to sort in decrease order
			++x;
		while (milk[y] > std) // Replace this line with "while (milk[y] < std)" to sort in decrease order
			--y;
		if (x <= y)
		{
			int tmp = milk[x];
			milk[x++] = milk[y];
			milk[y--] = tmp;
		}
	}
	if (l < y)
		qsort(l, y);
	if (x < r)
		qsort(x, r);
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	qsort(0, n - 1);
	printf("%d", milk[n / 2]);
	return 0;
}
