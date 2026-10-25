#include<iostream>
#include <cstring>
using namespace std;

bool campareWord(string word1,string word2){

    int st=0;
    int count1[26]={0};
      int count2[26]={0};
    if(word1.length()!=word2.length()){
        cout<<"it is not valid";
        return false;
    }

    while(st<word1.length()){
        int idx1=word1[st]-'a';
        int idx2=word2[st]-'a';
        count1[idx1]++;
        count2[idx2]++;
        st++;
    }
     
   for(int i=0;i<26;i++){
    if(count1[i]!=count2[i]){
        cout<<"it is not valid";
        return false;
    }
   }

   
    cout<<"it is valid";
     
    return true;

}

int main(){
    string word1="aplpe";
    string word2="aplep";
   
    campareWord(word1,word2);
    return 0;
}