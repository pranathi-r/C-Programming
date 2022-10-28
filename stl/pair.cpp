#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //1.
    pair<int,string>p;
    p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;


    //2.
     pair<int,string>p1;
     p1={2,"abcd"};
     cout<<p1.first<<" "<<p1.second<<endl;

     //3.
     pair<int,string>p2=p;
     p2.first=9;
     cout<<p2.first<<" "<<p2.second<<endl;

     //4.

       pair<int,string> &p3=p1;
     p3.first=10;
     cout<<p3.first<<" "<<p3.second<<endl;

     //5. array as pairs

     /*int a[]={1,2,3}   int b[]={4,5,6};*/
      
      pair<int,int> p_a[3];
      p_a[0]={1,4};
      p_a[1]={2,5};
      p_a[2]={3,6};

     swap(p_a[0],p_a[2]);
      for(int i=0;i<3;i++)
      {
        cout<<p_a[i].first<<" "<<p_a[i].second<<endl;
      }
      
     //6.
     pair<int,string> a;
     cin>>a.first;
     cin>>a.second;
     cout<<a.first<<" "<<a.second<<endl;



}