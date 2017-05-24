#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,q,i;
	//printf("N:");
	scanf("%d",&n);

	int arr[n];
	int freq[1001];

	for(i=0;i<1001;i++)
	{
		freq[i]=0;
	}


	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[arr[i]]++;
	}


	//printf("Q:");
	scanf("%d",&q);

	while(q--)
	{
		int num;
		scanf("%d",&num);

		if(freq[num]!=0)
		{
			printf("%d\n",freq[num]);
			
		}
		else
		{
			printf("NOT PRESENT\n");
			
		}	
	}
	return 0;
}