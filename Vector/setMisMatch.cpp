#include <iostream>
#include <vector>
using namespace std;

vector<int> setMisMatch(vector<int> vec)
{
    int st = 1, end = vec.size() - 1;
    vector<int> arr(vec.size() + 1, 0);
    
    int dudlicate;
    int missing;
    for(int i=0;i<vec.size();i++){
        arr[vec[i]]++;
    }
    for(int i=1;i<=vec.size();i++){
        if(arr[i]==2){
            dudlicate=i;
        }
        else if(arr[i]==0){
            missing=i;
        }
    }
    
    return {dudlicate,missing};
}

int main()
{
    vector<int> vec = {1,1};
    vector<int> ans = setMisMatch(vec);
    cout << ans[0] << " " << ans[1];
}