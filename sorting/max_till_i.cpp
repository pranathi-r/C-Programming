#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,a[100],key;
    int maxi=INT_MIN;
    cin>>n;
     cin>>key;
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   

    for(i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
        if(key==(i+1))
        {
            cout<<maxi;
        }
    }
}

