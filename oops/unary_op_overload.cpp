#include<bits/stdc++.h>
using namespace std;
class num
{
  int a,b,c,p,q,r;
  public:
  void getdata(int x,int y,int z)
  {
    a=x;
    b=y;
    c=z;
  }
  void display()
  {
    cout<<"Data:"<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
  }
  void dis()
  {
    cout<<"Data:"<<endl;
    cout<<p<<" "<<q<<" "<<r<<endl;
  }
 /* one way:   void operator -()    //2nd way: declaration here,definition outside class
  {
    a=-a;                             
    b=-b;
    c=-c;
  } */

  void operator ++();
};

void num::operator ++()
{
   p=a++;                             
    q=b++;
    r=c++; 
}
int main()
{

    num obj;
    obj.getdata(10,20,30);
    obj.display();
    ++obj;
     obj.display();
    obj.dis();
   
    return 0;
}