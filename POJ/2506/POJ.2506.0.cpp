#include <cstdio>
using namespace std;
const int SIZE = 251;
const int LEN = 100;
int ans[SIZE][LEN]; // ans[i][j] is the j-th rightmost bit of answer when the width of the rectangle is i
int main()
{
	ans[0][0] = ans[1][0] = 1; // Initialize ans[0] and ans[1]
	for (int i = 1; i < LEN; ++i)
			ans[0][i] = ans[1][i] = 0;
	for (int i = 2; i < SIZE; ++i) // Compute ans[2] to ans[250]
		for (int j = 0, tmp = 0; j < LEN; ++j)
		{
			tmp += 2 * ans[i - 2][j] + ans[i - 1][j]; // ans[i] = 2 * ans[i - 2] + ans[i - 1]
			ans[i][j] = tmp % 10;
			tmp /= 10;
		}
	for (int i; scanf("%d", &i) != EOF;)
	{
		bool prefix_of_zero = true;
		for (int j = LEN - 1; j >= 0; --j)
		{
			if (ans[i][j] == 0 && prefix_of_zero) // Remove the prefix of 0
				continue;
			prefix_of_zero = false;
			printf("%d", ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
