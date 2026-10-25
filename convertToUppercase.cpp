#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[]="ApPle";
    cout<<int('Z');
    for(int i=0;i<strlen(word);i++){
      if(int(word[i])>=65 && int(word[i]<=90))
      {
       cout<<word[i];
      }
      else
      {
        int diff=int(word[i]- 'a');
        char s='A'+ char(diff);
        
        cout<<s;
      }
    }
    return 0;
}