#include <stdio.h>

int main()
{
	int n,i,count=1;
	scanf("%d",&n);
	int h[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&h[i]);
	}

	for(i=1;i<n;i++)
	{
		if(h[i-1]>h[i])
		{
			count++;
		}
	}

	printf("%d\n",count);
}