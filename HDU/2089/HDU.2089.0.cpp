#include <cstdio>
using namespace std;
const int SIZE = 1e6 + 1;
int count[SIZE]; // count[i] keeps the number of the is_good numbers from 0 to i
bool is_good(int a)
{
	for (; a > 0; a /= 10) // Using division to avoid overflow
		if (a % 100 == 62 || a % 10 == 4)
			return false;
	return true;
}
int main()
{
	count[0] = 1;
	for (int i = 1; i < SIZE; ++i) // Fill the count[i]
		count[i] = is_good(i) ? count[i - 1] + 1 : count[i - 1];
	int n, m;
	for (scanf("%d%d", &n, &m); n != 0 || m != 0; scanf("%d%d", &n, &m))
		printf("%d\n", count[m] - count[n - 1]); // Don't forget to use the one before n, or you may lose the number n
	return 0;
}
