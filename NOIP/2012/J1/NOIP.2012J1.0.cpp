#include<cstdio>
using namespace std;
bool prime(int n)
{
	for(int i=2;i*i<n;++i)// Attention that the loop is from 2 because 2 is the smallest prime
		if(n%i==0)// If there is a division, return false
			return false;
	return true;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;++i)
		if(prime(i) && n%i==0)// You can replace this line with "if(n%i==0)"
		{
			printf("%d",n/i);
			return 0;
		}
	return 0;
}
