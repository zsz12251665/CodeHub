#include <cstdio>
using namespace std;
int main()
{
	int p, e, i, d, t = 0;
	for (scanf("%d%d%d%d", &p, &e, &i, &d); p != -1 || e != -1 || i != -1 || d != -1; scanf("%d%d%d%d", &p, &e, &i, &d))
		printf("Case %d: the next triple peak occurs in %d days.\n", ++t, (5544 * p + 14421 * e + 1288 * i - d + 21251) % 21252 + 1); // Pay attention to the format of the output
	return 0;
}
