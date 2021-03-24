#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 1e4;
const int RANGE = 1e6 + 10;
int milk[SIZE], c[RANGE];
void countingSort(int a[], int n)
{
	memset(c, 0, sizeof c);
	for (int i = 0; i < n; ++i)
		++c[a[i]];
	for (int i = 0, j = 0; i < RANGE && j < n; ++i) // Replace this line with "for (int i = RANGE - 1, j = 0; i >= 0 && j < n; --i)" to sort in decrease order
		while (c[i] > 0)
		{
			a[j++] = i;
			--c[i];
		}
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	countingSort(milk, n);
	printf("%d", milk[n / 2]);
	return 0;
}
