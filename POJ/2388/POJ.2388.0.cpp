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
		for (int j = 0; j < i; ++j)
			if (milk[i] < milk[j]) // Replace this line with "if (milk[i] > milk[j])" to sort in decrease order
			{
				int tmp = milk[j];
				milk[j] = milk[i];
				milk[i] = tmp;
			}
	printf("%d", milk[n / 2]);
	return 0;
}
