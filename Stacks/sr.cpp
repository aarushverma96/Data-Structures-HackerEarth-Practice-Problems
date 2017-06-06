#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n;
		vector<int> a(n);
		int count=0;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"gk";
		stack<int> s;
		s.push(0);
		cout<<1<<" ";
		for(i=1;i<n;i++)
		{
			count=0;
			int num=a[i];
			while(s.size()>0 && a[s.top()]<=num)
			{
				
				s.pop();
			}
			int res=i+1;
			if(s.size()>0)
			{
				res=i-s.top();
			}
			s.push(i);
			cout<<res<<" ";
		}
		cout<<endl;
	}

	return 0; 
}