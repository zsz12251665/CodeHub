#include <cstdio>
#include <cstring>
using namespace std;
const int LEN_W = 1e4 + 1;
const int LEN_T = 1e6 + 1;
char w[LEN_W], t[LEN_T];
int match[LEN_W];
int main()
{
	int q;
	for (scanf("%d", &q); q > 0; --q)
	{
		int ans = 0;
		scanf("%s%s", &w, &t);
		int len_w = strlen(w), len_t = strlen(t);
		if (len_t < len_w)
		{
			printf("0\n");
			continue;
		}
		match[0] = 0; // Build the partial match table
		for (int i = 1; i < len_w; ++i)
		{
			match[i] = match[i - 1];
			while (match[i] > 0 && w[i] != w[match[i]]) // If they are not matched, jump to the last match
				match[i] = match[match[i] - 1];
			if (w[i] == w[match[i]]) // If they are matched, add the partial match value
				match[i]++;
		}
		for (int i = 0, p = 0; i < len_t; ++i) // Scan t to find w, p is the position of w
		{
			while (i > p && t[i] != w[i - p]) // If they are not matched, jump to the last match
				p = i - match[i - 1 - p];
			if (t[i] == w[i - p] && i - p == len_w - 1) // If w is found
			{
				++ans;
				p = i - match[i - p - 1];
			}
			if (t[i] != w[i - p]) // If the head is still unmatched, move w
				++p;
		}
		printf("%%d\n", ans);
	}
	return 0;
}
