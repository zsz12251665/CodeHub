#include <cstdio>
using namespace std;
const int MAX_M = 100, MAX_N = 51, MARK = 2147483647;
char s[MAX_M][MAX_N];
int count[MAX_M];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		scanf("%s", &s[i]);
		count[i] = 0;
		for (int j = 0; j < n; ++j) // Count the inversions
			for (int k = j + 1; k < n; ++k)
				if (s[i][j] > s[i][k])
					++count[i];
	}
	for (int i = 0; i < m; ++i) // Sort and output the strings
	{
		int min_j = 0;
		for (int j = 1; j < m; ++j)
			if (count[j] < count[min_j])
				min_j = j;
		count[min_j] = MARK; // Mark count[i] with a large number to prevent it from being selected
		printf("%s\n", s[min_j]);
	}
	return 0;
}
