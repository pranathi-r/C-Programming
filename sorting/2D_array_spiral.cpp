#include<iostream>
using namespace std;
int main() {
    int n,m,i,j,a[100][100];
    cin>>m;
    cin>>n;
    
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
           cin>>a[i][j];
         }
    }

int R_Start=0,R_End=m-1,C_Start=0,C_End=n-1;

while(R_Start<=R_End && C_Start<=C_End)
{
    for(int r_s=C_Start;r_s<=C_End;r_s++)
    {
       cout<<a[R_Start][r_s]<<" ";
    }
    R_Start++;

    for(int c_e=R_Start;c_e<=R_End;c_e++)
    {
       cout<<a[c_e][C_End]<<" ";
    }
     C_End--;

     for(int r_e=C_End;r_e>=C_Start;r_e--)
     {
        cout<<a[R_End][r_e]<<" ";
     }
     R_End--;

     for(int c_s=R_End;c_s>=R_Start;c_s--)
     {
        cout<<a[c_s][C_Start]<<" ";
     }

     C_Start++;
}

}