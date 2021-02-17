#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 25e4; // An H-number 4n+1 <= 1e6 so that n < 25e4
int ans[SIZE];
int h_type[SIZE]; // We mark H-primes with 0, H-semi-primes with 1 and the others with -1
int main()
{
	memset(h_type, 0, sizeof h_type); // Initialize the h_type array
	for (int i = 1; i < SIZE; ++i) // Enumerate every pair of H-numbers
		for (int j = 1; j < SIZE; ++j)
		{
			int k = 4 * i * j + i + j; // (4 * i + 1) * (4 * j + 1) == 4 * (4 * i * j + i + j) + 1
			if (k > SIZE) // To avoid overlimit
				break;
			if (h_type[i] == 0 && h_type[j] == 0) // Check if it is a H-semi-prime
				h_type[k] = 1;
			else
				h_type[k] = -1;
		}
	ans[0] = 0; // Count the number of H-semi-primes from 1 to 4n+1
	for (int i = 1; i < SIZE; ++i)
		if (h_type[i] == 1)
			ans[i] = ans[i - 1] + 1;
		else
			ans[i] = ans[i - 1];
	int n;
	for (scanf("%d", &n); n != 0; scanf("%d", &n))
		printf("%d %d\n", n, ans[(n - 1) / 4]);
	return 0;
}
