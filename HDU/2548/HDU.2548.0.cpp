#include <cstdio>
using namespace std;
int main()
{
	int t;
	for (scanf("%d", &t); t > 0; --t)
	{
		double u, v, w, l;
		scanf("%lf%lf%lf%lf", &u, &v, &w, &l);
		printf("%.3lf\n", l / (u + v) * w);
	}
	return 0;
}
