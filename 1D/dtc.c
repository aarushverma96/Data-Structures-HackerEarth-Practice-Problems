#include <stdio.h>

int main()
{
	int n,t,m,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int lan[n],aux[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&lan[i]);
		}

		while(m--)
		{

			if(lan[1]==0)
			{
				aux[0]=0;
			}
			else
			{
				aux[0]=1;
			}

			if(lan[n-2]==0)
			{
				aux[n-1]=0;
			}
			else
			{
				aux[n-1]=1;
			}

			for(i=1;i<n-1;i++)
			{
				
					if(lan[i-1]==0 || lan[i+1]==0)
					{
						aux[i]=0;
					}
					else
					{
						aux[i]=1;
					}
			}

			for(i=0;i<n;i++)
			{
				lan[i]=aux[i];
			}

			
		}


		for(i=0;i<n;i++)
			{
				printf("%d ", lan[i]);
			}
			printf("\n");

	}
	return 0;
}