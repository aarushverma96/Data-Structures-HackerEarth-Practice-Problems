#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	stack<int> s;
	int count=0;
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
		if(a[i]>0)
		{
			s.push(a[i]);
		}
		else if(a[i]<0 && s.size()>0)
		{
			if(s.top()==abs(a[i]))
			{
				count++;
				s.pop();
			}
			else
			{
				break;
			}
		}
	}

	cout << 2*count << endl;
	return 0;
}