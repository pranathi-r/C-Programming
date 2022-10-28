#include<iostream>
using namespace std;
int frst(int a[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    int rA= frst(a,n,i+1,key);
    return rA;
}

int last(int a[],int n,int i,int key)
{

  if(i==n)
    {
        return -1;
    }
    int rA=last(a,n,i+1,key);
    if(rA!=-1)
    {
        return rA;
    }
    if(a[i]==key)
    {
        return i;
    }
return -1;
}
int main() {
    int a[]={4,2,1,2,5,2,7};

    
   cout<<frst(a,7,0,2)<<endl;
   cout<<last(a,7,0,2)<<endl;
   
    return 0;
}