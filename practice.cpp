#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[5]={'a','a','d','e','\0'};
    char arr1[]="code";
    cout<<arr << endl;
    cout<<arr1<<strlen(arr1);

    char word[30];
    cin>>word;
    cout<<"this is your word:"<<word <<endl;
     char sent[30];
     cin.getline(sent,30,'*');
     cout<<"this is your sentence:"<<sent;
    return 0;
}