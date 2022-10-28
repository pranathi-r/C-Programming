#include<iostream>
using namespace std;
int main() {
    int n,i,a[100],pd,ans,cur;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

   
    
        pd=a[1]-a[0];
        ans=2;
        cur=2;
       
        for(int j=2;j<n;j++)
        {
            if(pd==(a[j]-a[j-1]))
            {
                cur++;
            }
            else{
                cur=2;
                pd=(a[j]-a[j-1]);
            }

            ans=max(cur,ans);
        }

        cout<<ans;
}

    