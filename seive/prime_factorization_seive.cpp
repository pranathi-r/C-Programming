#include<iostream>
using namespace std;
void prime_fact(int n)
{
    int i,j;
    int spf[100];
    for(i=2;i<=n;i++)
    {
        spf[i]=i;
    }

    for(i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
          for(j=i*i;j<=n;j+=i)
          {
            if(spf[j]==j)
            {
                spf[j]=i;
            }
          }  
        }
    }

    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main() {
    int n,i,j;
    cin>>n;

    prime_fact(n);
    return 0;
}