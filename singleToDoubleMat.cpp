#include<iostream>
using namespace std;    


int changeMat(int a[],int m,int n){
    int i=0,j=0;
    int mat[1][1]={0};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=a[i*n+j];
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}




int main()
{
    int a[]={1,2};
    int m=1,n=1;
    changeMat(a,m,n);
}