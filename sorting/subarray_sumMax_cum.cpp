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
    int curSum[100];
    curSum[0]=0;
    for(int i=1;i<=n;i++)
    {
       curSum[i]=curSum[i-1]+a[i-1];
    }

    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=curSum[i]-curSum[j];
            maxi=max(sum,maxi);
        }

    }

    cout<<maxi;

}