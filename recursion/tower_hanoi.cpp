#include<iostream>
using namespace std;
void toh(int n,string src,string dest,string help)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,src,help,dest);
    cout<<"Move from:"<<src<<"-"<<dest<<endl;
    toh(n-1,help,dest,src);

}
    
int main() {
    int n;
    cin>>n;
    toh(n,"A","C","B");
  
    return 0;
}