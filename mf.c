#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n],fp[1000001]={0},fn[1000001]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			fp[a[i]]++;
		}
		else
		{
			fn[abs(a[i])]++;
		}
	}

	int pi,ni=0;
	int maxp=fp[0];
	int maxn=fn[0];

	for(i=1;i<1000001;i++)
	{
		if(fp[i]>maxp)
		{
			maxp=fp[i];
			pi=i;
		}
		if(fn[i]>maxn)
		{
			maxn=fn[i];
			ni=i;
		}
	}

	if(maxp>maxn)
	{
		printf("%d\n",pi);
	}
	else
	{
		printf("%d\n",-ni);
	}
}