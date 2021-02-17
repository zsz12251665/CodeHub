#include <cstdio>
using namespace std;
const int SIZE = 1e6 + 1;
int c[SIZE];
int main()
{
	for (int milk = 1; milk < SIZE; ++milk)
		c[milk] = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int milk;
		scanf("%d", &milk);
		c[milk]++;
	}
	int tmp = 0;
	for (int milk = 1; milk < SIZE; ++milk) // Replace this line with "for (int milk = SIZE - 1; milk > 0; --milk)" to sort in decrease order
		if (tmp + c[milk] > n / 2)
		{
			printf("%d", milk);
			return 0;
		}
		else
			tmp += c[milk];
	return 0;
}
