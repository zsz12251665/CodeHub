#include <cstdio>
using namespace std;
const int SIZE = 1000;
int disjointSet[SIZE];
bool isCounted[SIZE];
int find(int a)
{
	if (disjointSet[a] != a)
		disjointSet[a] = find(disjointSet[a]);
	return disjointSet[a];
}
int main()
{
	int n, m;
	for (scanf("%d", &n); n != 0; scanf("%d", &n))
	{
		scanf("%d", &m);
		int sum = 0;
		for (int i = 0; i < n; i++) //Initialize the arrays
		{
			disjointSet[i] = i;
			isCounted[i] = false;
		}
		for (int i = 0, a, b; i < m; i++)
		{
			scanf("%d%d", &a, &b);
			disjointSet[find(a - 1)] = find(b - 1); //Merge the sets
		}
		for (int i = 0; i < n; i++) //Count the number of the tables
			if (!isCounted[find(i)])
			{
				isCounted[find(i)] = true;
				sum++;
			}
		printf("%d\n", sum - 1);
	}
	return 0;
}
