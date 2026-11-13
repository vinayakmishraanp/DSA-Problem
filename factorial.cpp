#include<iostream>
using namespace std;

int factFunction(int n){
    if(n==0 || n==1)
    {
        return 1;
    }
    else{

        return n*factFunction(n-1);//recursion
        }


}

int main(){
    cout<<factFunction(5);
}