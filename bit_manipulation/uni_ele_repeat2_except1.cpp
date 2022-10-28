#include<iostream>
using namespace std;
void unique(int a[],int n)
{
    int xsum=0;
    for(int i=0;i<n;i++)
    {
      xsum=xsum^a[i];
    }
    cout<<xsum<<endl;

}
int main(){
    int n,i,a[100];
    cin>>n;
    
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    unique(a,n);

    return 0;
}