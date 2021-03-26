#include <cstdio>
using namespace std;
const int SIZE = 100;
int h[SIZE][SIZE], l[SIZE][SIZE];
int r, c; // Set as global variable for boundary detection
int skiFrom(int x, int y) // Search function
{
	if (l[x][y] != 0) // If the point has been searched, return the answer
		return l[x][y];
	int max_l = 0; // Search the longest length
	if (x > 0 && h[x - 1][y] < h[x][y] && skiFrom(x - 1, y) > max_l)
		max_l = l[x - 1][y];
	if (y > 0 && h[x][y - 1] < h[x][y] && skiFrom(x, y - 1) > max_l)
		max_l = l[x][y - 1];
	if (x < r - 1 && h[x + 1][y] < h[x][y] && skiFrom(x + 1, y) > max_l)
		max_l = l[x + 1][y];
	if (y < c - 1 && h[x][y + 1] < h[x][y] && skiFrom(x, y + 1) > max_l)
		max_l = l[x][y + 1];
	l[x][y] = max_l + 1; // Do not forget to plus 1, or you'll forget to count this point
	return l[x][y];
}
int main()
{
	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
		{
			l[i][j] = 0; // Initialize the length array
			scanf("%d", &h[i][j]);
		}
	int ans = 0; // Search for the longest length of each point and keep the longest one
	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
			if (skiFrom(i, j) > ans)
				ans = l[i][j];
	printf("%d", ans);
	return 0;
}
