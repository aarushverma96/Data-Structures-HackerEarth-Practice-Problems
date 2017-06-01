#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,inv=0;
		int i,j,p,q;
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(p=n-1;p>=i;p--)
				{
					for(q=n-1;q>=j;q--)
					{
						if(a[i][j]>a[p][q])
						{
							inv++;
						}
					}
				}
			}
		}

		printf("%d\n", inv);
	}
	return 0;
}