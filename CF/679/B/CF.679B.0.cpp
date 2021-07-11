#include<cstdio>
using namespace std;
long long cube(int a)
{
	return (long long)a*a*a;
}
int count(long long m)// Count how many blocks can be added at most
{
	if(m<8)
		return m;
	int a=1;
	while(cube(a+1)<=m)
		++a;
	if(cube(a)-1-cube(a-1)>m-cube(a))// Choose the situation with the maximum volume remained
		return 1+count(cube(a)-1-cube(a-1));
	else
		return 1+count(m-cube(a));
}
int main()
{
	long long m,x=0;
	int h=0,a;
	for(scanf("%lld",&m);m>0;)// m is the volume remained
	{
		++h;
		for(a=1;cube(a+1)<=m;)// find the biggest cube
			++a;
		if(count(cube(a)-1-cube(a-1))>count(m-cube(a)))// Choose the tallest solution
		{
			m=cube(a)-1-cube(a-1);
			x+=cube(a-1);
		}
		else
		{
			m-=cube(a);
			x+=cube(a);
		}
	}
	printf("%d %lld\n",h,x);
	return 0;
}
