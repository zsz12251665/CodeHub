#include <cstdio>
#include <utility>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
void quickSort(int a[], int l, int r)
{
	int x = l, y = r, std = a[(l + r) / 2];
	while (x < y)
	{
		while (a[x] < std) // Replace this line with "while (a[x] > std)" to sort in decrease order
			++x;
		while (a[y] > std) // Replace this line with "while (a[y] < std)" to sort in decrease order
			--y;
		if (x <= y)
		{
			swap(a[x], a[y]);
			++x;
			--y;
		}
	}
	if (l < y)
		quickSort(a, l, y);
	if (x < r)
		quickSort(a, x, r);
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	quickSort(milk, 0, n - 1);
	printf("%d", milk[n / 2]);
	return 0;
}
