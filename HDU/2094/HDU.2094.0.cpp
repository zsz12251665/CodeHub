#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 1000;
long long winner[SIZE], loser[SIZE]; // the array winner keeps the winner list and the array loser keeps the loser list
char s[SIZE];
long long getName() // Turn name strings to integers
{
	scanf("%s", &s);
	long long p = 1, ans = 0;
	for (int i = 0, len = strlen(s); i < len; ++i)
	{
		ans += p * s[i];
		p *= 128;
	}
	return ans;
}
int main()
{
	int n;
	for (scanf("%d", &n); n != 0; scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
		{
			winner[i] = getName();
			loser[i] = getName();
		}
		for (int i = 0; i < n; ++i) // Scan the array loser and array winner to check if the winner used to lose a match
			for (int j = 0; j < n; ++j)
				if (winner[j] == loser[i])
					winner[j] = -1;
		long long champion = -1; // champion == -1 means there is no champion
		for (int i = 0; i < n; ++i) // Scan the array winner to check if there are more than one champion or no champion
			if (winner[i] != -1 && champion != winner[i])
				if (champion == -1)
					champion = winner[i];
				else
				{
					champion = -1;
					break;
				}
		printf((champion == -1) ? "No\n" : "Yes\n");
	}
	return 0;
}
