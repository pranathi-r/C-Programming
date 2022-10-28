#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    int flag=1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[n-1-i])
        {
           flag=-1;
           break;
        }
    }

    if(flag==1)
    {
        cout<<"It is a palindrome";
    }

    else{
         cout<<"It is not a palindrome";
    }

}