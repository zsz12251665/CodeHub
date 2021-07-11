#include<cstdio>
using namespace std;
int main()
{
	int n,m,k,x;
	scanf("%d%d%d%d",&n,&m,&k,&x);
	long long power=1,base=10;// To avoid overlimit, we use long long here
	while(k>0)// The fast power algorithm
	{
		if(k%2==1)// Divide k into binary
			power=(power*base)%n;
		base=(base*base)%n;
		k/=2;
	}
	printf("%lld",(power*m+x)%n);
	return 0;
}
