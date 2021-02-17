#include <cstdio>
using namespace std;
const int SIZE = 1e4;
int milk[SIZE];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &milk[i]);
	for (int i = 1; i < n; ++i)
		for (int j = 0; j < n - i; ++j)
			if (milk[j] > milk[j + 1]) // Replace this line with "if (milk[j] < milk[j + 1])" to sort in decrease order
			{
				int tmp = milk[j];
				milk[j] = milk[j + 1];
				milk[j + 1] = tmp;
			}
	printf("%d", milk[n / 2]);
	return 0;
}
