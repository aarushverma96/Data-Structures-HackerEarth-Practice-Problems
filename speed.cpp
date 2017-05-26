#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,i;
	cin >> t;
	
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		stack<int> s;
		s.push(a[0]);

		for(i=1;i<n;i++)
		{
			if(a[i]<=s.top())
			{
				s.push(a[i]);
			}
		}

		cout<<s.size()<<endl;
	} 
}