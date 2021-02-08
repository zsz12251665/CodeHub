#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 1e6 + 1;
int next[SIZE][26], fail[SIZE], last[SIZE], queue[SIZE], value[SIZE];
char s[SIZE];
int main()
{
	int t;
	for (scanf("%d", &t); t > 0; --t)
	{
		memset(next, 0, sizeof next); // Initialize the arrays
		memset(fail, 0, sizeof fail);
		memset(last, 0, sizeof last);
		memset(value, 0, sizeof value);
		int n, ans = 0;
		scanf("%d", &n);
		for (int size = 0; n > 0; --n) // Build the trie
		{
			int p = 0;
			scanf("%s", &s);
			for (int i = 0, len = strlen(s); i < len; ++i)
			{
				if (next[p][s[i] - 'a'] == 0)
					next[p][s[i] - 'a'] = ++size;
				p = next[p][s[i] - 'a'];
			}
			value[p]++;
		}
		queue[0] = 0; // Build the fail array
		for (int head = 0, foot = 1; head != foot;)
		{
			int p = queue[head++];
			for (int i = 0; i < 26; ++i)
				if (next[p][i] != 0)
				{
					queue[foot++] = next[p][i];
					if (p == 0)
						continue;
					int tmp = fail[p]; // If they are not matched, jump to the last match
					while (tmp > 0 && next[tmp][i] == 0)
						tmp = fail[tmp];
					fail[next[p][i]] = next[tmp][i];
					if (value[next[tmp][i]] == 0) // last is the last node of an model string
						last[next[p][i]] = last[next[tmp][i]];
					else
						last[next[p][i]] = next[tmp][i];
				}
				else
					next[p][i] = fail[p];
		}
		scanf("%s", &s);
		for (int i = 0, p = 0, len = strlen(s); i < len; ++i) // Scan the question string to find the model strings
		{
			while (p != 0 && next[p][s[i] - 'a'] == fail[p]) // If they are not matched, jump to the last match
				p = fail[p];
			p = next[p][s[i] - 'a'];
			for (int tmp = p; tmp != 0; tmp = last[tmp]) // Jump back to find out all model strings available
			{
				ans += value[tmp];
				value[tmp] = 0;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
