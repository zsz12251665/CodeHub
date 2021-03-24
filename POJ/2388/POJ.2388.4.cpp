#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE], c[SIZE];
void mergeSort(int a[], int l, int r)
{
	if (l >= r)
		return;
	mergeSort(a, l, (l + r) / 2);
	mergeSort(a, (l + r) / 2 + 1, r);
	memcpy(c, a, sizeof c);
	for (int i = l, x = l, y = (l + r) / 2 + 1; i <= r; ++i)
	{
		if (x > (l + r) / 2)
		{
			a[i] = c[y++];
			continue;
		}
		if (y > r)
		{
			a[i] = c[x++];
			continue;
		}
		if (c[x] > c[y]) // Replace this line with "if (c[x] < c[y])" to sort in decrease order
			a[i] = c[y++];
		else
			a[i] = c[x++];
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	mergeSort(milk, 0, n - 1);
	printf("%d", milk[n / 2]);
	return 0;
}
