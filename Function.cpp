#include <iostream>
using namespace std;
void paraFunction(int a,int b);
void firstFunction(){
    cout<<"hello world\n";
    
 }
// when we make the main function void and 
// other funtion int when we call the main 
// function it will give error
 void secondFunction(); //calling the forword declaration
int main(){
    cout<<"hello world\n";
    firstFunction();
    secondFunction();
     paraFunction(8,6);
return 0;

}

// forword declaration
void secondFunction(){
    cout<<"its called forward declaration\n";
}

// syntax with parameters

void paraFunction(int a,int b){
    int c=a+b;
    cout<<"\nthe sum is:"<<c;


}