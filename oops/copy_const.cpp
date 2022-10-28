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
       /*student()
       {
        cout<<"default constructor"<<endl;
          roll_no=10;
          name="ShreeRam";
          age=20;
          
       }*/
      
      //para constructor
      student(int a,string s,int g)
      {
        cout<<"para constructor"<<endl;
          roll_no=a;
          name=s;
          age=g;
      }

      //copy constructor
      student(student &var)
      {
        cout<<"copy constructor"<<endl;
        roll_no=var.roll_no;
        name=var.name;
        age=var.age;

      }
 
       


void printInfo()
   {
    cout<<roll_no<<endl;
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<endl;
   }

};

int main()
{
    //student a;
    //a.printInfo();
   
   
   student b(98,"sita",20);
    //b.printInfo(); 
                               
        student c=b;                         
   //c.printInfo();
   



}