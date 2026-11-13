#include<iostream>
using namespace std;

int tranposeMat(int mat[][3],int n,int m){
    int a[][2]={0};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           a[j][i]=mat[i][j];
         
        }
         
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int mat[][3]={
        {1,2,3},
        {4,5,6}
    };
tranposeMat(mat,2,3);
}