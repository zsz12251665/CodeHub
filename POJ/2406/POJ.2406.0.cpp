#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 1e6 + 1;
char s[SIZE];
int main()
{
	for (scanf("%s", &s); strcmp(s, ".") != 0; scanf("%s", &s))
	{
		int len = strlen(s);
		for (int i = 1; i <= len; ++i) // Enumerate the length of a period
			if (len % i == 0)
			{
				bool is_period = true;
				for (int j = 0; j < len; ++j) // Scan the whole string to check if it is a period
					if (s[j] != s[j % i])
					{
						is_period = false;
						break;
					}
				if (is_period) // The shortest period makes the biggest power index
				{
					printf("%d\n", len / i);
					break;
				}
			}
	}
	return 0;
}
