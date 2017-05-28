#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int arra[n],arrb[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arra[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrb[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arra[i]+arrb[i]);
	}
	return 0;
}