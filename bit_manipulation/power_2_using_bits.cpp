#include<iostream>
using namespace std;
bool power_2(int n)
{
    return(n && !(n & n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<power_2(n)<<endl;
}
