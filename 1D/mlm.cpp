#include <stdio.h>

int main()
{
	int t,n;
	int i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		int min=-1;
		int count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(min==-1)
			{
				min=a[i];
			}
			else
			{
				if(min>a[i])
				{
					min=a[i];
				}
			}
		}

	//	printf("%d\n", min);

		for(i=0;i<n;i++)
		{
			if(a[i]==min)
			{
				count++;
			}
		}

		//printf("%d\n", count);

		if(count%2==0)
		{
			printf("Unlucky\n");
		}
		else
		{
			printf("Lucky\n");
		}
	}
	return 0;
}