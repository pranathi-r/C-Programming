#include<iostream>
using namespace std;
void p(string s,string ans)
{
if(s.length()==0)
{
    cout<<ans<<endl;
    return;
}


for(int i=0;i<s.length();i++)
{
    char ch=s[i];
    string ros=s.substr(0,i)+s.substr(i+1);
    p(ros,ans+ch);
}
}

int main()
{
    string s;
    cin>>s;
    p(s," ");
    return 0;
}