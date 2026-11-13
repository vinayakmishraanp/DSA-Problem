#include<iostream>
#include<cstring>
using namespace std;

bool isPalidrome(char word[],int n){
 int str=0,end=n-1;
 while(str<end){
    if(word[str++]!=word[end--]){
        cout<<"not valid word";
       
        return false;
        
       }
    
 }
 cout<<"valid word";
 return true;

}

int main(){
    char word[]="rtar";
    isPalidrome(word,strlen(word));
    return 0;

}