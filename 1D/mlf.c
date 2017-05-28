#include <stdio.h>

int main()
{
	int food[100000];
	int top;
	top=-1;
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int ac1,ac2;
		scanf("%d",&ac1);
		if(ac1==2)
		{
			scanf("%d",&ac2);
			food[++top]=ac2;
		}
		if(ac1==1)
		{
			if(top==-1)
			{
				printf("No Food\n");
			}
			else
			{
				printf("%d\n",food[top]);
				top--;
			}
		}
	}
	
	return 0;
}