#include<iostream>
using namespace std;



void updateithBit(int i,int num,int val){
num=num & ~(1<<i);

num=num|(val<<i);

cout<<num<<endl;
}
int main(){
    updateithBit(3,7,1);

    return 0;
}