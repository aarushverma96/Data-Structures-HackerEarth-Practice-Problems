#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,c=0,i,j,k;
  cin>>n;
  string a[n];
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }

  
  for(i=0;i<n;i++)
  {
   for(j=0,k=n-1;j<=k;j++,k--)
   {
    if(a[i][j]!=a[i][k])
    {
     cout<<"NO"<<endl;
     c=1;
     break;
    }
   }
   if(c==1)
   break;
  }



  if(c!=1)
  {
   for(i=0;i<n;i++)
  {
   for(j=0,k=n-1;j<=k;j++,k--)
   {
    if(a[j][i]!=a[k][i])
    {
     cout<<"NO"<<endl;
     c=1;
     break;
    }
   }
   if(c==1)
   break;
  }
  }
  if(c==0)
  cout<<"YES"<<endl;
 }
 return 0;
}