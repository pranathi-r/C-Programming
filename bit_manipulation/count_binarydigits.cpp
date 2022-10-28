#include<iostream>
using namespace std;
void count(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    cout<<count<<endl;
}
int main()
{
    int n;
    cin>>n;
    count(n);
}
