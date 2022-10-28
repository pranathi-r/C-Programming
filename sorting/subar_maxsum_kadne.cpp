#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a[100],i;
   int maxi=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cSum=0;
    for(int i=0;i<n;i++)
    {
        cSum+=a[i];
        if(cSum<0)
        {
            cSum=0;
        }

        maxi=max(maxi,cSum);
    }
cout<<maxi<<endl;

}