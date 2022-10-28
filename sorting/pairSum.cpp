#include<iostream>
using namespace std;
bool pairSum(int a[],int n,int k)
{
    int l,h;
    l=0;
    h=n-1;
    while(l<=h)
    {
        if(a[l]+a[h]<k)
        {
            l++;
        }
        else{
            h--;
        }
        if(a[l]+a[h]==k)
        {
            return true;
        }
    }
}
int main() {
    int n,i,a[100],k;
    cin>>n;
    
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
bool ans=pairSum(a,n,k);


cout<<ans<<endl;

}