#include<iostream>
using namespace std;
int getBit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}
void unique2(int a[],int n)
{
    int xsum=0;
   
    for(int i=0;i<n;i++)
    {
      xsum=xsum^a[i];
    }
   int temp=xsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=(xsum & 1);
        pos++;
       xsum=xsum>>1;
    }
     int newsum=0;
 for(int i=0;i<n;i++)
 {
    if(getBit(a[i],pos-1))
    {
        
        newsum=newsum^a[i];
    }
 }
cout<<newsum<<endl;
cout<<(temp^newsum)<<endl;

}
int main(){
    int n,i,a[100];
    cin>>n;
    
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    unique2(a,n);

    return 0;
}