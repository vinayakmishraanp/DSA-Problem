#include<iostream>
#include<string>
using namespace std;

bool Valid(string str1,string str2){
 if(str1.length()!=str2.length())
 {
  cout<<"this is nnot valid anagram";
  return false;
 }
 int count[26]={0};
 for(int i=0;i<str1.length();i++)
 {
    int idx=str1[i]- 'a';
count[idx]++;
 }
 for(int i=0;i<str2.length();i++)
 {
    int idx=str2[i]-'a';
    if(count[idx]==0){
        cout<<"this is not anagram";
        return false;
    }
    count[idx]--;
   
 }
 cout<<"this is valid anagram";
 return true;
}
int main(){
 string str1="tac";
 string str2="car";
 Valid(str1,str2);
 return 0;
}