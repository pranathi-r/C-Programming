#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s="abcacbadeb";
    int count[100];
    int maxi=INT_MIN;
    for(int i=0;i<26;i++)
    {
        count[i]={0};
    }

    for(int i=0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    }


    char ans;
    for(int i=0;i<26;i++)
    {
        if(maxi<=count[i])
        {

            maxi=count[i];
            ans=i+'a';

        }
    }

    cout<<maxi<<"--"<<ans<<endl;
}