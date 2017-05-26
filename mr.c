#include <stdio.h>

int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		int k;
		scanf("%d%d",&n,&k);
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

		for(i=0;i<n;i++)
		{
			int index=i;
			index=(index+k)%n;
			b[index]=a[i];
		}

		for(i=0;i<n;i++)
		{
			printf("%d ",b[i]);
		}

		printf("\n");
	}
}