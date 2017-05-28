#include <stdio.h>

int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	count=n;
	int co[n];
	int io[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&co[i]);
	}

	for(i=0;i<n;i++)
	{
		scanf("%d",&io[i]);
	}

	/*for(i=0;i<n;i++)
	{
		printf("%d",io[i]);
	}

	printf("jhgj\n");

	for(i=0;i<n;i++)
	{
		printf("%d",co[i]);
	}*/

	for(i=0;i<n;i++)
	{
		int f,j;
		int a=io[i];
		//printf("hell");
		while(co[i]!=a)
		{
			f=co[i];
			for(j=i;j<n-1;j++)
			{
				co[j]=co[j+1];
			}

			co[n-1] = f;
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}