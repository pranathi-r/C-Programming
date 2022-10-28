#include<iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            break;
        }

    }

    if(i==n)
    {
        cout<<"The no is prime"<<endl;
    }

    else{
         cout<<"The no is not prime"<<endl;

    }

}