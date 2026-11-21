#include<iostream>

using namespace std;

void countSetBit(int num){

int count=0;
while(num>0){
    int lastDig=num & 1;
    count+=lastDig;
    num = num >> 1;
}

cout<<count<<endl;


}



int main(){
    countSetBit(7);
    return 0;
}
