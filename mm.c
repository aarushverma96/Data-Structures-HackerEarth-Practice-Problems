#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,q,i;
	//printf("N:");
	scanf("%d",&n);

	int arr[n];
	int freq[1000];

	while(n--)
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
		if(freq[num]==0)
		{
			printf("NOT PRESENT\n");
		}
		else
			printf("%d\n",freq[num]);
	}
	return 0;
}