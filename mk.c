#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,x,i,j,out;
	scanf("%d%d",&n,&x);
	int ques[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ques[i]);
	}

	for(i=0;i<n;i++)
	{
		if(ques[i]>x)
		{
			i++;
			break;
		}
		else
		{

			out++;
		}
	}

	for(j=i;j<n;j++)
	{
		if(ques[j]>x)
		{

			break;
		}
		else
		{

			out++;
		}
	}

	printf("%d",out);

	return 0;
}