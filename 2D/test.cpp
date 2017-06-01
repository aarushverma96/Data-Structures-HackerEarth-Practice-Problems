#include <iostream>
using namespace std;
 
int main()
{
     int N;
     int x1,x2,y1,y2;
     int price;
     int f[1000][1000]={0};
     cin>>N;
     long sum=0;
     while(N--)
     {
         cin>>x1>>y1>>x2>>y2>>price;
           for(int i=x1-1;i<x2;i++)
            {
                for(int j=y1-1;j<y2;j++)
                {
                    if(f[i][j]==0)
                      f[i][j]=price;
                     else if(f[i][j]>0) 
                       f[i][j]=(-1)*(f[i][j]+price);
                      else
                      f[i][j]=f[i][j]-price;
                      
                }
            }
         
     }
     for(int i=0;i<1000;i++)
       for(int j=0;j<1000;j++)
        if(f[i][j]<0)   
          sum+=f[i][j];
         
    cout<<-1*sum;
    return 0;
}