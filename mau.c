#include <stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		int n,j,min;
		int k;
		
		scanf("%d%d",&n,&k);
		int arr[n];

		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}

		min=arr[0];

		for(j=0;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
			}
		}

		int res;

		if(min<k)
		{
			res=k-min;
		}
		else
		{
			res=0;
		}

		
		printf("%d\n",res);

	}

	return 0;
}	