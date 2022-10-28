#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    //1
    string str;
    cin>>str;
    cout<<str<<endl;

    //2
   string s1(5,'a');
   cout<<s1<<endl;

   //3
   string s2="ApnaCollege";
   cout<<s2<<endl;

   //4. To read words after whitespace

   string s3;
   getline(cin,s3);
   cout<<s3<<endl;
    
}