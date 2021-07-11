#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	int t;
	for (scanf("%d", &t); t > 0; --t)
	{
		double a, b, c, d;
		scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
		printf("%.1lf\n", sqrt((a - c) * (a - c) + (b - d) * (b - d)));
	}
	return 0;
}
