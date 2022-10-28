#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,a[100];
    cin>>n;
     
     for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=10000;
    bool check[N];
     
     for(i=0;i<N;i++)
     {
        check[i]=false;
     }
     
     for(i=0;i<n;i++)
     {
        if(a[i]>=0)
        {
           check[a[i]]=true;
        }
     }

     for(i=0;i<n;i++)
     {
        if(check[i]==false)
        {
             cout<<i<<endl;
            break;
        }
     }

    
}