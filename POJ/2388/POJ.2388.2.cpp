#include <cstdio>
#include <utility>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; ++i)
		for (int j = i; j > 0; --j)
			if (a[j - 1] > a[j]) // Replace this line with "if (a[j - 1] < a[j])" to sort in decrease order
				swap(a[j - 1], a[j]);
			else
				break;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	insertionSort(milk, n);
	printf("%d", milk[n / 2]);
	return 0;
}
