#include<iostream>
#include <string>
#include <stack>
using namespace std;


bool isValide(string word){
    stack <char> s;
    for(int i=0;i<word.size();i++){
        if((word[i]=='(') || (word[i]=='(') || (word[i]=='(')){
            s.push(word[i]);
        }
        else{
            if(word.size()==0){
                return false;
            }
            if((word[i]==')' && s.top()=='(') || 
            (word[i]=='}' && s.top()=='{')||
            (word[i]==']' && s.top()=='[')){
                s.pop();
            }
            else{
                return false;
            }
    }

}
 cout<<s.size();

 return s.size()==0;
};

int main(){
    string word="{{[()]}[]()()}";
   
   
    isValide(word);
    return 0;
}