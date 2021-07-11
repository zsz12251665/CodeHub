#include<cstdio>
using namespace std;
int main()
{
	int n,ans=2147483647,tmp,prc,amt;// Remember to make the ans as large as possible to make sure that you can get the cost of each kind
	scanf("%d",&n);
	for(int i=0;i<3;++i)
	{
		scanf("%d%d",&amt,&prc);
		tmp=0;
		for(int j=n;j>0;j-=amt)// In oreder to avoid count one more pack, I pick the packs one after one
			tmp+=prc;
		if(tmp<ans)
			ans=tmp;
	}
	printf("%d",ans);
	return 0;
}
