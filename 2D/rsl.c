#include <iostream>

using namespace std;

int main()
{
	int t,n,i,j,k,res;
	scanf("%d",&t);
	while(t--)
	{
		int c=0;
		cin>>n;
		char l[n];
		int count=0;
		for(i=0;i<n;i++)
		{
			cin>>l[i];
		}

		for(i=0;i<n;i++)
		{
			for(j=0,k=n-1;j<=k;j++,k--)
			{
				if(l[i][j]!=l[i][k])
				{
					cout<<"NO"<endl;
					c=1;
					break;
				}
				if(c==1)
				break;
			}
			if(c==1)
				break;
		}

		if(c!=1)
		{
			for(j=0;j<n;j++)
			{
				for(i=0,k=n-1;i<=k;i++,k--)
				{
					if(l[i][j]!=l[k][j])
					{
						cout<<"NO"<endl;
						c=1;
						break;
					}
				}
			}
		}

		if(c==0)
		{
			cout<<"YES"<endl;;
		}

	}
	return 0;
}