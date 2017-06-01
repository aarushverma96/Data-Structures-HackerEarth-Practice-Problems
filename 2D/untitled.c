#include <stdio.h>


int main()
{
	int n,x1,x2,y1,y2,c,i,j;

	
	scanf("%d",&n);
	int farm[1000][1000]={0};
	long int sum=0;
	while(n--)
	{
		scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&c);

		printf("%d%d%d%d%d\n",x1,y1,x2,y2,c);

		for(i=y1-1;i<y2;i++)
		{
			for(j=x1-1;j<x2;j++)
			{
				if(farm[i][j]==0)
				{
					farm[i][j]=c;
				}
				else if(farm[i][j]>0)
				{
					farm[i][j]=(-1)*(farm[i][j]+c);
				}
				else
				{
					farm[i][j]=farm[i][j]-c;
				}
			}
		}


		 for(i=0;i<12;i++)
		 {
		 	for(j=0;j<12;j++)
		 	{
		 		printf("%d",farm[i][j]);
		 	}
		 	printf("\n");
		 }

		for(i=0;i<1000;i++)
		{
			for(j=0;j<1000;j++)
			{
				if(farm[i][j]<0)
				{
					sum=sum+farm[i][j];

				}
			}
		}	
	}
	printf("%ld",sum);
	return 0;
}