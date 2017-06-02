#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack<int> s;
		int n,init;
		cin>>n;
		cin>>init;
		s.push(init);
		while(n--)
		{
			char type;
			int id;
			cin>>type;
			if(type=='P')
			{
				cin>>id;
				s.push(id);
			}
			else
			{
				int temp,topt;
				temp=s.top();
				s.pop();
				topt=s.top();
				s.push(temp);
				s.push(topt);
			}
		}

		cout<<"Player "<<s.top()<<endl;
	}
}