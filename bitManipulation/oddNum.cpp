#include<iostream>
using namespace std;    


void numCheck(int num){
    if(num & 1==1){
        cout<<"Odd Number="<<num;
    }
    else{
        cout<<"Even Number="<<num;
    }
}
int main(){
    int num=8;
    numCheck(num);
}