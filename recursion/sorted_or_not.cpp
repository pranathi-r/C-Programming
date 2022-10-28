#include<iostream>
using namespace std;
bool sorted(int a[],int n)
{
    if(n==1)
    {
        return 1;
    }
    bool rA=sorted(a+1,n-1);
   return (a[0]<a[1] && rA);
}
int main() {
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<sorted(a,n)<<endl;
    return 0;
}