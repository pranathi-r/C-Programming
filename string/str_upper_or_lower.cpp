#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Str_upper_or_lower(string r1,string r2)
{
   transform(r1.begin(),r1.end(),r1.begin(),:: toupper);
   cout<<r1<<endl;

   transform(r2.begin(),r2.end(),r2.begin(),:: tolower);
   cout<<r2<<endl;

}
int main() {

cout<<'a'-'A'<<endl;
    string s1="abcdef";
    string s2="ABCDEF";
    string r1="ghijkl";
    string r2="GHIJKL";


    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
           s1[i]-=32;
        }
    }

    cout<<s1<<endl;


    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]>='A' && s1[i]<='Z')
        {
           s2[i]+=32;
        }
    }

    cout<<s2<<endl;

    Str_upper_or_lower(r1,r2);
}