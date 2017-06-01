#include <stdio.h>

int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	int res1=a[0][0]+a[0][2]+a[1][1]+a[2][0]+a[2][2];
	int res2=a[0][1]+a[1][0]+a[1][2]+a[2][1];

	printf("%d\n", res1);
	printf("%d\n", res2);

	return 0;
}