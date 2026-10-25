#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void countVowel(string str){
    int st=0,count=0;
    while(st < str.length())
    {
      if(int(str[st])==97 || int(str[st])==101 || int(str[st])==105 || int(str[st])==111 || int(str[st])==117)
      {
        count++;
      }
      st++;
    }
    cout<<count;
}
int main(){
    string str;
    getline(cin,str);
    countVowel(str);
return 0;
}