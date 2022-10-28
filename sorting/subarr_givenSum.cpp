#include<iostream>
using namespace std;
int main() {
    int n,i,j,a[100],S;
    int sum=0;
    int s=0,e=0;
    cin>>n;
    cin>>S;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(e<n && sum+a[e]<=S)
    {
        sum+=a[e];
        e++;
    }

    if(sum==S)
    {
        cout<<s+1<<" "<<e<<endl;
    }

    while(e<n)
    {
        sum+=a[e];
        while(sum>S)
        {
            sum-=a[s];
            s++;

        }
        if(sum==S)
        {
            cout<<s+1<<" "<<e+1<<endl;
            break;
        }
        e++;
    }

}