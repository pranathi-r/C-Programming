#include<iostream>
using namespace std;
int main() {
    int n,m,i,j,a[100][100],key;
    cin>>m;
    cin>>n;
    cin>>key;
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
           cin>>a[i][j];
         }
    }

bool flag=false;
    int r=0,c=n-1;
    while(r<m && c>=0)
    {
        if(a[r][c]==key)
        {
            flag=true;
           
        }

       if(key>a[r][c])
        {
            r++;
        }

        else{
            c--;
        }
    }
cout<<"an";
    if(flag)
    {
        cout<<"Element is found";
    }

    else{
         cout<<"Element is not found";
    }

}