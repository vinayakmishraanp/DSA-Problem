#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1={1,2,3,4,5};
    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;
    cout<<vec1.empty()<<endl;
    vec1.push_back(6);
    cout<<vec1.capacity()<<endl;
    cout<<vec1.empty()<<endl;
     cout<<vec1.size()<<endl;
      vec1.push_back(7);
        cout<<vec1.capacity()<<endl;
    cout<<vec1.empty()<<endl;
     cout<<vec1.size()<<endl;
}