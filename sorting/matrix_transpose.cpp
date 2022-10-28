#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,j,a[100][100];
    cin>>m;
    cin>>n;
    
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
           cin>>a[i][j];
         }
    }
 for(i=0;i<m;i++)
    {
         for(j=i;j<n;j++)
         {
           
            
               int temp=a[i][j];
               a[i][j]=a[j][i];
               a[j][i]=temp;
            
         }
         
    }
for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
            cout<<a[i][j]<<" ";
         }
         cout<<endl;
    }
}