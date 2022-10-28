#include<bits/stdc++.h>
using namespace std;
int n;
void print(int i,int j)
{
    if(j>n)
    return;

    cout<<i<<" "<<j<<endl;
    if(i<n)
    {
        print(i+1,j);
        
    }
    else{
        i=1;
        j++;
        print(i,j);
    }
}
int main()
{
    cin>>n;
    print(1,1);
    return 0;
}