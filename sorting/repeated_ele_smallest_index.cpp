#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=10000;
    int idx[N];
    for(i=0;i<N;i++)
    {
        idx[i]=-1;

    }
    int miny=INT_MAX;
    
for(i=0;i<n;i++)
{
    if(idx[a[i]]!=-1)
    {
        miny= min(miny,idx[a[i]]);
    }
    else{
        idx[a[i]]=i;
    }
}

if(miny==-1)
{
    cout<<"-1"<<endl;

}


else{
    cout<<miny+1<<endl;
}

}