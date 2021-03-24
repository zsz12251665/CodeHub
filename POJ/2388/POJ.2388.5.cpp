#include <cstdio>
#include <utility>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
bool cmp(int a[], int n, int x, int y) // This is a max heap
{
	if (y >= n)
		return false;
	return a[x] < a[y]; // Replace this line with "return a[x] > a[y];" to sort in decrease order
};
void heapSort(int a[], int n)
{
	for (int i = n / 2; i > 0; --i) // Initialize the heap
	{
		int p = i - 1;
		while (cmp(a, n, p, 2 * p + 1) || cmp(a, n, p, 2 * p + 2)) // Shift down process
		{
			p = cmp(a, n, 2 * p + 1, 2 * p + 2) ? 2 * p + 2 : 2 * p + 1;
			swap(a[p], a[(p - 1) / 2]);
		}
	}
	for (int i = n - 1; i > 0; --i) // Pop the first element to the end of the array
	{
		swap(a[0], a[i]);
		--n;
		int p = 0;
		while (cmp(a, n, p, 2 * p + 1) || cmp(a, n, p, 2 * p + 2)) // Shift down process
		{
			p = cmp(a, n, 2 * p + 1, 2 * p + 2) ? 2 * p + 2 : 2 * p + 1;
			swap(a[p], a[(p - 1) / 2]);
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	heapSort(milk, n);
	printf("%d", milk[n / 2]);
	return 0;
}
