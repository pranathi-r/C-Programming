#include<bits/stdc++.h>
using namespace std;
class num
{
  int fi,sec;
  public:
  void getdata(int x,int y)
  {
    fi=x;
    sec=y;
   
  }
  void display()
  {
    cout<<"Data:"<<endl;
    cout<<fi<<" "<<sec<<endl;
  }
  num operator*(num obj2);
};
num num::operator*(num obj2)
{
 num temp;
 temp.fi=fi*obj2.fi;
 temp.sec=sec*obj2.sec;
 return temp;

}

int main()
{

    num obj1,obj2,obj3;
    obj1.getdata(2,3);
    obj2.getdata(4,6);
    obj1.display();
    obj2.display();
    obj3=obj1*obj2;   //internally it is obj3 =obj1.operator*(obj2) 
        obj3.display();             // ob3=ob1.multiply(ob2);--normal passing objects
    return 0;
}