#include <cstdio>
using namespace std;
const int SIZE = 1e7 + 10;
int mu[SIZE], prime[SIZE];
bool isPrime[SIZE];
int pre[SIZE]; // The prefix sum of mu[i]
int main()
{
	int n, size = 0;
	scanf("%ld", &n);
	for (int i = 2; i <= n; ++i)
		isPrime[i] = true;
	mu[1] = 1;
	for (int i = 2; i <= n; ++i) // The linear sieve to find the primes and calculate mu[i]
	{
		if (isPrime[i])
		{
			prime[size++] = i;
			mu[i] = -1;
		}
		for (int j = 0; j < size && i * prime[j] <= n; ++j)
		{
			isPrime[i * prime[j]] = false;
			mu[i * prime[j]] = i % prime[j] == 0 ? 0 : -mu[i];
			if (i % prime[j] == 0)
				break;
		}
	}
	pre[0] = 0; // Calculate the prefix sum
	for (int i = 1; i <= n; ++i)
		pre[i] = pre[i - 1] + mu[i];
	long long ans = 0; // Calculate the answer
	for (int i = 0; i < size; ++i)
		for (int d = 1, j; d <= n / prime[i]; d = n / prime[i] / j + 1)
		{
			j = n / prime[i] / d;
			ans += (long long)(pre[n / prime[i] / j] - pre[d - 1]) * j * j;
		}
	printf("%lld", ans);
	return 0;
}
