#include<cstdio>
using namespace std;
int book[1000];
bool match(int book,int reader)
{
	while(reader>0)
	{
		if(book%10!=reader%10 || book==0)
			return false;
		book/=10;// Move a bit forward
		reader/=10;
	}
	return true;
}
int main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;++i)
		scanf("%d",&book[i]);
	for(int i=0,tmp;i<q;++i)
	{
		int reader,ans=2147483647;
		scanf("%d%d",&tmp,&reader);
		for(int j=0;j<n;++j)// Enumerate the books to find the right one
			if(match(book[j],reader) && book[j]<ans)
				ans=book[j];
		if(ans==2147483647)
			ans=-1;
		printf("%d\n",ans);
	}
	return 0;
}
