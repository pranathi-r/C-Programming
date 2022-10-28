#include<iostream>
using namespace std;
void primeSeive(int n)
{
    int i,j;
    int prime[100]={0};
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=i;
            }
        }
    }
for(i=2;i<=n;i++)
{
    if(prime[i]==0)
    {
        cout<<i<<endl;
    }
}
    
}
int main() {
    int n,i,j;
    cin>>n;

    primeSeive(n);
    return 0;
}