#include<iostream>
#include <cstring>
using namespace std;

bool campareWord(string str1,string str2){

    int st=0,count=0;
    while(st<=(str1.length()-1)){
        if(str1[st]!=str2[st]){
            count++;
        }
        st++;
    }
    if(count<=2)
    {
        cout<<"possible to swap";
        return true;
    }
    else{
        cout<<"sorry its not possible to swap";
        return false;
    }
}


int main()
{
    string str1="apple";
    string str2="apoel";
    campareWord(str1,str2);
    return 0;
}