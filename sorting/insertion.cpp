#include <iostream>
using namespace std;
void insertion(int a[],int n)
{
    int key,i,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;(a[j]>key&&j>=0);j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;

    }
}
int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion(a,n);
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}