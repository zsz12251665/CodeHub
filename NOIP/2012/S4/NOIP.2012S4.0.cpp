#include<cstdio>
using namespace std;
void exgcd(int a,int b,int &x,int &y)
{
	if(b==0)// The recursion border
	{
		x=1;// Keep the quotients
		y=0;
		return;
	}
	exgcd(b,a%b,y,x);// Recur gcd
	y-=a/b*x;// Update the quotients
}
int main()
{
	int a,b,x,y;
	scanf("%d%d",&a,&b);
	exgcd(a,b,x,y);
	printf("%d",(x%b+b)%b);// Output the minimum positive integer
	return 0;
}
