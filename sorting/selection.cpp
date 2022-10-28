#include <iostream>
using namespace std;
void  selection(int a[],int n)
{
    int temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[j]<a[i])
           {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
           }
        }
    }

}

int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection(a,n);
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}