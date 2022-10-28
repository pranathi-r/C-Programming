
#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int roll_no;

    public:
    string name;
    int age;
       
       //default constructor
       student()
       {
          roll_no=10;
          name="ShreeRam";
          age=20;
          
       }
       
       void printInfo()
{
    cout<<roll_no<<endl;
    cout<<name<<endl;
    cout<<age<<endl;
}

};

int main()
{
    student a;
    a.printInfo();
}