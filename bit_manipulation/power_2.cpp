#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
int r;
    while(n!=1)
    {
        
       
        r=n%2;
        n=n/2;
        if(r==1)
        {
            cout<<"not power of 2"<<endl;
            break;
        }
       
    }
    if(r==0)
    {
       cout<<" power of 2"<<endl; 
    }
    return 0;
}