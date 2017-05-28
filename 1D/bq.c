#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,q,i;
	scanf("%d%d",&n,&q);

	int bina[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&bina[i]);
	}

	while(q--)
	{
		int q[3];
		scanf("%d",&q[0]);
		if(q[0]==1)
		{
			scanf("%d",&q[1]);

			if(bina[q[1]-1]==1)
			{
				bina[q[1]-1]=0;
			}
			else
				bina[q[1]-1]=1;
			
		}
		else
		{
			scanf("%d%d",&q[1],&q[2]);

			if(bina[q[2]-1]==0)
			{
				printf("EVEN\n");
			}
			else
				printf("ODD\n");
		}

		//printf("%d %d %d\n",q[0],q[1],q[2]);
	}


	return 0;
}