#include<iostream>
using namespace std;
int main() {
    int n,i,a[100];
    cin>>n;
     a[n]=-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

   if(n==1)
   {
    cout<<"1"<<endl;
   }
int ans=0;
int mx=-1;

for(int i=0;i<n;i++)
{
    if(a[i]>mx && a[i]>a[i+1])
    {
        ans++;
    }
    mx=max(mx,a[i]);
}
cout<<ans;
return 0;
}