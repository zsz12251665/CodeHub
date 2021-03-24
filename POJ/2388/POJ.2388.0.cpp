#include <cstdio>
#include <utility>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
void bubbleSort(int a[], int n)
{
	for (int i = 1; i < n; ++i)
		for (int j = 0; j < n - i; ++j)
			if (a[j] > a[j + 1]) // Replace this line with "if (a[j] < a[j + 1])" to sort in decrease order
				swap(a[j], a[j + 1]);
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	bubbleSort(milk, n);
	printf("%d", milk[n / 2]);
	return 0;
}
