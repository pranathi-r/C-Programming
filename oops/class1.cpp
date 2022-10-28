#include<bits/stdc++.h>
using namespace std;
class student
{
    // default private:
     private:
     int roll_no;


    public:
     string name;
    int age;

void setName(int usn)
{
    roll_no=usn;
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
    int n,usn;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>usn;
        a[i].setName(usn);
        
        cin>>a[i].name;
        cin>>a[i].age;
    }
 for(int i=0;i<n;i++)
 {
    a[i].printInfo();
 }

}
    