#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,a[100],k;
    int maxi=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

      for(i=0;i<n;i++)
      {
        
          for(j=i;j<n;j++)
          {
            int sum=0;
            for(k=i;k<=j;k++)
            {
                
                sum+=a[k];
           
            maxi=max(maxi,sum);
            }
            cout<<sum<<endl;
            cout<<endl;
            
          }
      }
      cout<<"max:"<<maxi;

}