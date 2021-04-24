#include <cstdio>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

priority_queue<long long, vector<long long>, greater<long long> > plank; // "greater" for min heap

int main()
{
	long long ans = 0, l;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld", &l);
		plank.push(l);
	}
	for (int i = 1; i < n; ++i)
	{
		l = plank.top();
		plank.pop();
		l += plank.top();
		plank.pop();
		ans += l;
		plank.push(l);
	}
	printf("%lld", ans);
	return 0;
}
