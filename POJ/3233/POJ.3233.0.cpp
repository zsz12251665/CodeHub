#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 30;
typedef long long Matrix[SIZE][SIZE];
int n, k, m;
Matrix A, S, P, T, M, tmp;
void add(const Matrix &a, const Matrix &b, Matrix &res) // Matrix addition
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			res[i][j] = (a[i][j] + b[i][j]) % m;
}
void multiply(const Matrix &a, const Matrix &b, Matrix &res) // Matrix multiplication
{
	memset(res, 0, sizeof res);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			for (int c = 0; c < n; ++c)
				res[i][j] = (a[i][c] * b[c][j] + res[i][j]) % m;
}
int main()
{
	scanf("%d%d%d", &n, &k, &m);
	for (int i = 0; i < n; ++i) // Read the matrix A
		for (int j = 0; j < n; ++j)
		{
			scanf("%lld", &A[i][j]);
			A[i][j] %= m;
		}
	memcpy(P, A, sizeof P); // P is initially A too
	memcpy(T, A, sizeof T); // T is initally A
	memset(S, 0, sizeof S); // S is initally 0
	memset(M, 0, sizeof M); // M is initally I
	for (int i = 0; i < n; ++i)
		M[i][i] = 1;
	for (; k > 0; k /= 2) // Convert k into binary
	{
		if (k % 2 == 1)
		{
			multiply(M, T, tmp); // S = S + M * T
			add(S, tmp, S);
			multiply(M, P, tmp); // M = M * P
			memcpy(M, tmp, sizeof tmp);
		}
		multiply(P, T, tmp); // T = T + P * T
		add(T, tmp, T);
		multiply(P, P, tmp); // P = P * P
		memcpy(P, tmp, sizeof tmp);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			printf("%lld ", S[i][j]);
		putchar('\n');
	}
	return 0;
}
