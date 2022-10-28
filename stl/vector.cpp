#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    cout<<"size:"<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";   //v.size() ->O(1)
     }
     cout<<endl;
}
int main()
{
    //1. similar to array but size can be mentioned dynamically int v[10];
   /* vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       print(v);
       v.push_back(x); //O(1)

    }*/
   //2. 
   vector<int> v1(10);
   v1.push_back(7);
   print(v1);

   //3.
   vector<int> v2(10,3);
   v2.push_back(7);
   print(v2);

   //4.
   vector<int> v3;
   v3.push_back(7);
   print(v3);

   //5.
   
   v3.push_back(8);
   print(v3);
   v3.pop_back();  //O(1);
   print(v3);

   //6.
    vector<int>



}