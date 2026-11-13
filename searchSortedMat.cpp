#include <iostream>
using namespace std;


bool sortSearch(int mat[][4],int m,int n,int key){
    int i=0,j=m-1;
  
    while(i<n && j>=0){
        if(mat[i][j]==key)
        {
            cout<<"("<<i<<","<<j<<")"<<endl;
            return true;
        }
        else if(mat[i][j]>key)
        {
            // move left
            j--;
        }
        else{
            // move down
            i++;
        }
    }
    cout<<"key not fount";
    
    return false;

//     for(int j=0;j<n;j++)
// {
// if (mat[i][j]==t){
    
//     cout<<i<<" "<<j<<endl;
    
//     return 1;
// }
// }
}

int main(){
    int matrix[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int n=4; 
    int m=4;   
    int t=32;
    sortSearch(matrix,m,n,t);
    }
