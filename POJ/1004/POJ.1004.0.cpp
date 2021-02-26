#include <cstdio>
using namespace std;
int main()
{
	double sum = 0.0, tmp;
	for (int i = 0; i < 12; ++i)
	{
		scanf("%lf", &tmp);
		sum += tmp;
	}
	printf("$%.2lf", sum / 12.0);
	return 0;
}
