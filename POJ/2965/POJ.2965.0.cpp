#include <cstdio>
#include <cstring>
using namespace std;
bool a[4][4];
char s[5];
int main()
{
	memset(a, 0, sizeof a);
	for (int i = 0; i < 4; ++i)
	{
		scanf("%s", &s);
		for (int j = 0; j < 4; ++j)
			if (s[j] == '+') // Scan the handles
			{
				for (int k = 0; k < 4; ++k)
				{
					a[i][k] = !a[i][k];
					a[k][j] = !a[k][j];
				}
				a[i][j] = !a[i][j]; // In the loop, (i,j) has been done twice, so add once more can keep that all the seven handles is done
			}
	}
	int ans = 0;
	for (int i = 0; i < 4; ++i) // Count the number
		for (int j = 0; j < 4; ++j)
			if (a[i][j])
				++ans;
	printf("%d\n", ans);
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 4; ++j)
			if (a[i][j])
				printf("%d %d\n", i + 1, j + 1); // Don't forget to plus 1 because the loop is from 0 to 3
	return 0;
}
