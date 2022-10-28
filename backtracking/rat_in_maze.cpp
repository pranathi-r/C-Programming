#include<bits/stdc++.h>
using namespace std;
bool isSafe(int** a,int x,int y,int n)
{
    if(x<n && y<n && a[x][y]==1)
    {
        return true;
    }

    return false;
}
bool ratinMaze(int** a,int x,int y,int n,int** sol)
{
    if(x==n-1 && y==n-1)
    {
        sol[x][y]=1;
        return true;
    }
    if(isSafe(a,x,y,n))
    {
        sol[x][y]=1;
        
       if(ratinMaze(a,x+1,y,n,sol))
        {
            return true;
        }

        if(ratinMaze(a,x,y+1,n,sol))
        {
            return true;
        }

        sol[x][y]=0;
        return false;
    }

    return false;
}
int main()
{
    int n;
    cin>>n;

    //Dynamically declared 2D array as input
    int** a=new int*[n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int[n];
        for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }

    }


//Dynamically declared 2D sol array to print output
int** sol=new int*[n];
    for(int i=0;i<n;i++)
    {
        sol[i]=new int[n];
        for(int j=0;j<n;j++)
    {
        sol[i][j]=0;
    }
    }
if(ratinMaze(a,0,0,n,sol))
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}


}

 
