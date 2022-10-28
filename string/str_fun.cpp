#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    //1. Append

    string s1="Fam";
    string s2="ily";
    s1.append(s2);
    cout<<s1<<endl;

    //1.a
    string s="Fam";
    cout<<s+s2<<endl;

    //1.b

    string s3=s+s2;
    cout<<s3<<endl;

    //2. To access particular char

    cout<<s1[1]<<" "<<s2[1]<<endl;

    //3. compare
    cout<<s2.compare(s1)<<endl;
    
    string c1="abc";
    string c2="str";
   int a=c2.compare(c1);
   cout<<a<<endl;

   
    string b1="abc";
    string b2="abc";
    cout<<b2.compare(b1)<<endl;

    //4.clear
    string abc="hijklmn";
    abc.clear();
    cout<<abc<<endl;

    //5.To check string is empty or not
    string xyz="gggg";
    xyz.clear();
    if(xyz.empty())
    {
        cout<<"String is empty"<<endl;
    }
    else
    {
        cout<<"String is not empty"<<endl;
    }

    //6.Erase
    string d="nincompoop";
    d.erase(3,3);
    cout<<d<<endl;

    //7.Find
     string d1="nincompoop";
     cout<<d1.find("com")<<endl;

     //8.Insert

      string d2="nincompoop";
      d2.insert(2,"loop");
      cout<<d2<<endl;

      //9.Length or size
       string d3="nincompoop";
       cout<<d3.size()<<endl;
       cout<<d3.length()<<endl;
       for(int i=0;i<d3.length();i++)
       {
        cout<<d3[i]<<endl;
       }

    //10.Substring
    string d4="nincompoop";
    string d_4=d4.substr(6,4);
    cout<<d_4<<endl;

    //11.Str_to_int
    string e1="786";
    int x=stoi(e1);
    cout<<x+2<<endl;

    //12.int_to_str
    int x1=786;
    cout<<to_string(x1)+"2"<<endl;

    //13a. sort(ascen)
    string f1="vhghiwarjk";
    sort(f1.begin(),f1.end());
    cout<<f1<<endl;
       

       //13.b sort(desc)
       string f2="vhghiwarjk";
       sort(f2.begin(),f2.end(),greater<int>());
    cout<<f2<<endl;


}