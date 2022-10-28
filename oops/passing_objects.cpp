#include<bits/stdc++.h>
using namespace std;
class mul
{
    int first,second;
    public:
    void getdata(int x,int y)
    {
        first=x;
        second=y;
    }
    void display()
    {
        cout<<first<<" "<<second<<endl;
    }

   mul multiply(mul ob2)
    {
       mul temp;
       temp.first=first*ob2.first;
       temp.second=second*ob2.second;
       return temp;
    }
};

int main()
{
     mul ob1,ob2,ob3;
     ob1.getdata(2,3);
     ob2.getdata(4,6);
     ob1.display();
     ob2.display();
  //ob3 is muliplication of ob1 and ob2 how to do it?

  ob3=ob1.multiply(ob2);
   ob3.display();
    return 0;
}