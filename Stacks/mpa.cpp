#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long long int a[n];
	cin>> n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int x,y;

	for(int i=0;i<n;i++)
	{
		if(i!=0&&i!=n-1)
		{
			for(x=i-1;x>=0;x--)
			{
				if(a[x]<a[i])
				{
					break;
				}
			}

			for(y=i+1;y<n;y++)
			{
				if(a[y]<a[i])
				{
					break;
				}
			}
			cout<<x+y;
		}
		else if(i==0)
		{
			x=-1;
			for(y=i+1;y<n;y++)
			{
				if(a[y]<a[i])
				{
					break;
				}
			}
			cout<<x+y;
		}
		else if(i==n-1)
		{
			y=-1;
			for(x=i-1;x>=0;x--)
			{
				if(a[x]<a[i])
				{
					break;
				}
			}
			cout<<x+y;
		}
	}


}