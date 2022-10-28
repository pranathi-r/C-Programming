#include<bits/stdc++.h>
using namespace std;

void mat_mul(int a[][100],int b[][100],int m,int p,int n)
{
int c[100][100];

int i,j,k;
 for(i=0;i<m;i++)
    {
         for(j=0;j<p;j++)
         {
            c[i][j]={0};
         }
    }


for(i=0;i<m;i++)
{
    for(j=0;j<p;j++)
    {
        for(k=0;k<n;k++)
        {
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
}


for(i=0;i<m;i++)
{
    for(j=0;j<p;j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}

}
int main() {
    int n,m,o,p,i,j,k,l,a[100][100],b[100][100];
    cin>>m;
    cin>>n;
    cin>>o;
    cin>>p;
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
           cin>>a[i][j];
         }
    }

    for(k=0;k<o;k++)
    {
        for(l=0;l<p;l++)
        {
            cin>>b[k][l];
        }
    }

    if(n==o)
    {
        mat_mul(a,b,m,n,o,p);
    }
    else{
        cout<<"Matrix cannot be multipied";
    }
}