#include<cstdio>
using namespace std;
int fruit[20001];// To avoid overlimit, I made the fruit array twice larger
int size=0;
void insert(int a)// The proceudure to insert a number into the fruit array
{
	++size;
	fruit[size]=a;
	for(int i=size;i>1 && fruit[i]<fruit[i/2];i/=2)// Maintain the heap
	{
		int tmp=fruit[i];
		fruit[i]=fruit[i/2];
		fruit[i/2]=tmp;
	}
}
int extract()// The proceudure to extract the top from the fruit array
{
	int ans=fruit[1];// C++ couldn't use the use the name of function to keep the feedback, so I have to use another longint to keep it
	fruit[1]=fruit[size];
	fruit[size]=2147483647;// Fill the null part with 2147483647
	--size;
	for(int i=1;fruit[i*2]<fruit[i] || fruit[i*2+1]<fruit[i];)// Maintain the heap
	{
		i=(fruit[i*2]<fruit[i*2+1])?i*2:i*2+1;
		int tmp=fruit[i];
		fruit[i]=fruit[i/2];
		fruit[i/2]=tmp;
	}
	return ans;
}
int main()
{
	int ans=0,tmp;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=2*n;++i)// Fill the array with maxlongint
		fruit[i]=2147483647;
	for(int i=0;i<n;++i)
	{
		scanf("%d",&tmp);
		insert(tmp);
	}
	for(int i=1;i<n;++i)
	{
		tmp=extract()+extract();
		ans+=tmp;
		insert(tmp);
	}
	printf("%d",ans);
	return 0;
}
