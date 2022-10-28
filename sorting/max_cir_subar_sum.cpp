#include<bits/stdc++.h>
using namespace std;
int kadne(int a[],int n)
{
    int cS=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cS+=a[i];
        if(cS<0)
        {
            cS=0;
        }

        mx=max(mx,cS);
        
    }
return mx;
}
int main() {
    int n,a[100],i,nonwrap,tS=0,wrap;
   int maxi=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    nonwrap=kadne(a,n);

    for(i=0;i<n;i++)
    {
        tS+=a[i];
        a[i]=-a[i];
    }

    wrap=tS+kadne(a,n);
    cout<<max(wrap,nonwrap)<<endl;
}