#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n+1);
   
    
    int i=0,cur=0,maxi=0;
    int x=0,word_start=0;

    while(true)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            if(cur>maxi)
            {
                maxi=cur;
                word_start=x;
            }
            cur=0;
            x=i+1;
        }

        else
        {
            cur++;
            
        }
        if(a[i]=='\0')
        {
            break;
        }
        i++;
        
    }
cout<<maxi<<endl;
for(int j=word_start;j<maxi;j++)
{
    cout<<a[j];
}
}