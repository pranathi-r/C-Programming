#include<iostream>
using namespace std;
string M_x(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ros=M_x(s.substr(1));
   
    if(ch=='x')
    {
        return ros+ch;
    }
    return (ch+ros);
}
int main() {
    string s="axbxcxd";
   cout<<M_x(s);
  
    return 0;
}