#include <cstdio>
using namespace std;
const int SIZE = 1e5;
int arr[SIZE];
int left[4 * SIZE], right[4 * SIZE], lazytag[4 * SIZE];
long long sum[4 * SIZE];
void init(int p, int l, int r) // Build and initialize the segment tree
{
	left[p] = l;
	right[p] = r;
	lazytag[p] = 0;
	if (l == r)
	{
		sum[p] = arr[l - 1];
		return;
	}
	init(2 * p + 1, l, (l + r) / 2);
	init(2 * p + 2, (l + r) / 2 + 1, r);
	sum[p] = sum[2 * p + 1] + sum[2 * p + 2];
}
void add(int p, int l, int r, int c) // The adding operation
{
	sum[p] += (long long)c * (r - l + 1); // Update the sum and remember to use long long
	if (l == left[p] && r == right[p])
	{
		if (l != r) // Add the lazytag
			lazytag[p] += c;
		return;
	}
	int mid = (left[p] + right[p]) / 2;
	if (lazytag[p] != 0) // Pass down the lazytag
	{
		add(2 * p + 1, left[p], mid, lazytag[p]);
		add(2 * p + 2, mid + 1, right[p], lazytag[p]);
		lazytag[p] = 0;
	}
	if (r <= mid)
		add(2 * p + 1, l, r, c);
	if (l > mid)
		add(2 * p + 2, l, r, c);
	if (l <= mid && r > mid)
	{
		add(2 * p + 1, l, mid, c);
		add(2 * p + 2, mid + 1, r, c);
	}
}
long long search(int p, int l, int r) // The searching operation
{
	if (l == left[p] && r == right[p])
		return sum[p];
	int mid = (left[p] + right[p]) / 2;
	if (lazytag[p] != 0) // Pass down the lazytag
	{
		add(2 * p + 1, left[p], mid, lazytag[p]);
		add(2 * p + 2, mid + 1, right[p], lazytag[p]);
		lazytag[p] = 0;
	}
	if (r <= mid)
		return search(2 * p + 1, l, r);
	if (l > mid)
		return search(2 * p + 2, l, r);
	if (l <= mid && r > mid)
		return search(2 * p + 1, l, mid) + search(2 * p + 2, mid + 1, r);
}
int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	init(0, 1, n); // Build and initialize the segment tree
	for (int i = 0; i < q; ++i)
	{
		char s[2];
		scanf("%s", &s);
		if (s[0] == 'C') // The adding operation
		{
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			add(0, a, b, c);
		}
		if (s[0] == 'Q') // The searching operation
		{
			int a, b;
			scanf("%d%d", &a, &b);
			printf("%lld\n", search(0, a, b));
		}
	}
	return 0;
}
