#include<iostream>
using namespace std;



int searchKey(int mat[][3],int n,int m,int key){
int a=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        if(i==1)
        {
            a+=mat[i][j];
        }
    }
    
}
cout<<a<<endl;
}
int main(){
    int n=3,m=3,key=8;
    int mat[][3]={
        {1,4,9},{11,4,3},
        {2,2,3}
    };
    searchKey(mat,n,m,key);
    return 0;
}