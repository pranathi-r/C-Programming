//constructor

#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int roll_no;

    public:
    string name;
    int age;

student(int a,string s,int b)
{
    roll_no=a;
    name=s;
    age=b;
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
    student a(98,"pranathi",20);
    a.printInfo();
}