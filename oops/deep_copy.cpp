#include<bits/stdc++.h>
using namespace std;
class demo
{
    int a,b,*p;
    public:
     

    demo(int x,int y,int c)
    {
        cout<<"Para"<<endl;
        a=x;
        b=y;
        p=new int;
       *p=c;
       *p=100;
    }

    /*demo(demo &ref)
    {
       cout<<"Copy"<<endl;
       a=ref.a;
       b=ref.b;
       p=new int;
       *p=*(ref.p);
       *p=90;
    }*/
void print()
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*p<<endl;
    cout<<endl;
}

};

int main()
{
   demo a(10,20,30);
    a.print();
demo a_cpy=a;
a_cpy.print();
}