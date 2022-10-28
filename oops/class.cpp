#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int marks;
    
    public:
    int roll_no;
    string name;
    int age;

    void setName(int m)
    {
        marks=m;
    }

void printInfo()
{
    cout<<roll_no<<endl;
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<marks<<endl;
}
};
int main()
{
    int mark;
   
    student a;
     a.roll_no=12;
     a.name="Rama";
     a.age=20;
      a.setName(98);

     
      student b;
      cin>>b.roll_no;
      cin>>b.name;
      cin>>b.age;
      cin>>mark;
      b.setName(mark);

     a.printInfo();
     b.printInfo();

    return 0;
}