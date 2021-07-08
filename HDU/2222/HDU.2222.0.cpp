#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
const int SIZE = 1e6 + 1;
int match[SIZE][26], fail[SIZE], last[SIZE], value[SIZE];
char s[SIZE];
int main()
{
	int t;
	for (scanf("%d", &t); t > 0; --t)
	{
		memset(match, 0, sizeof match); // Initialize the arrays
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
				if (!match[p][s[i] - 'a'])
					match[p][s[i] - 'a'] = ++size;
				p = match[p][s[i] - 'a'];
			}
			value[p]++;
		}
		queue<int> q; // Build the fail array
		q.push(0);
		while (!q.empty())
		{
			int p = q.front();
			q.pop();
			for (int i = 0; i < 26; ++i)
				if (match[p][i])
				{
					q.push(match[p][i]);
					if (p == 0)
						continue;
					int tmp = fail[p]; // If they are not matched, jump to the last match
					while (tmp > 0 && !match[tmp][i])
						tmp = fail[tmp];
					fail[match[p][i]] = match[tmp][i];
					if (value[match[tmp][i]] == 0) // last is the last node of an model string
						last[match[p][i]] = last[match[tmp][i]];
					else
						last[match[p][i]] = match[tmp][i];
				}
				else
					match[p][i] = fail[p];
		}
		scanf("%s", &s);
		for (int i = 0, p = 0, len = strlen(s); i < len; ++i) // Scan the question string to find the model strings
		{
			while (p != 0 && match[p][s[i] - 'a'] == fail[p]) // If they are not matched, jump to the last match
				p = fail[p];
			p = match[p][s[i] - 'a'];
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
