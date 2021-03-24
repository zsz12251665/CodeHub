#include <cstdio>
#include <utility>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int t = i;
		for (int j = i + 1; j < n; ++j)
			if (a[t] > a[j]) // Replace this line with "if (a[t] < a[j])" to sort in decrease order
				t = j;
		if (t != i)
			swap(a[i], a[t]);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	selectionSort(milk, n);
	printf("%d", milk[n / 2]);
	return 0;
}
