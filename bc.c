#include <bits/stdc++.h>

using namespace std;
main()
{
 int n,sum=0;
 cin>>n;
 int ar[n+1];
 stack<int> s;
 for(int i=0;i<n;i++)
 {
  cin>>ar[i];
 }
 
 for(int i=0;i<n;i++)
 {
  if(ar[i]!=0)
  {
   s.push(ar[i]);
  }
  else if(ar[i]==0 and !s.empty())
  {
   s.pop();
  }
 }
 while(!s.empty())
 {
  sum+=s.top();
  s.pop();
 }
 cout<<sum;
}