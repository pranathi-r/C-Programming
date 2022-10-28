#include<iostream>
using namespace std;
int getBit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return(n|(1<<pos));
}
void unique3(int a[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(a[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result=setBit(result,i);
        }
    }

    cout<<result<<endl;

}
int main(){
    int n,i,a[100];
    cin>>n;
    
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    unique3(a,n);

    return 0;
}