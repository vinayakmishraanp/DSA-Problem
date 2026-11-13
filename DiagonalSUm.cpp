#include <iostream>
using namespace std;

int diadonalSum(int mat[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        // for(int j=0;j<n;j++){
        //     if(i==j){
        //         sum+=mat[i][j];
        //     }
        //     else if(j==n-i-1){
        //         sum+=mat[i][j];
        //     }
           
        // }
        sum+=mat[i][i];
        if(i != n-i-1){
            sum+=mat[i][n-i-1];
        }
         
    }
    cout<<sum<<endl;
    return sum;
}


int main(){
    int matrix[3][3]={
        {
            1,2,3
        },
        {
            5,6,7
        },
        {
            9,10,11
        }
        
    };
    
    diadonalSum(matrix,3);
    return 0;
    
}