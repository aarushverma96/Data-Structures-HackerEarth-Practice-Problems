#include <iostream>
#include <list>
#include <string>
#include <cassert>
using namespace std;
int main()
{
	int test,BobblyWords=0;
	cin>>test;
	list <char> L;
	while(test--)
	{
		string S;
		cin>>S;
		if(!(S.size()%2))
		{
			for(int i=0;i<S.size();i++)
			{
				if(S[i]=='A')
				{
					if(!L.empty())
					{
						if(L.back()=='A')
							L.pop_back();
						else
							L.push_back('A');
					}
					else
						L.push_back('A');
				}
				else
				{
					if(!L.empty())
					{
						if(L.back()=='B')
							L.pop_back();
						else
							L.push_back('B');
					}
					else
						L.push_back('B');
				}
			}
			if(!L.size())
				++BobblyWords;
			L.clear();
	}
	}
	cout<<BobblyWords<<endl;
	return 0;
}