#include<iostream>
#include<vector>

using namespace std;
int maxWater(vector<int>& vec){
    int left=0,rigth=vec.size()-1;
    int area=0;
    int width=0,heigth=0,maxArea=0;

    while(left<rigth){
      width=rigth-left;
      heigth=min(vec[left],vec[rigth]);
      area=width*heigth;
      maxArea=max(maxArea,area);
      vec[left]<vec[rigth]?left++:rigth--;
   
}
 return maxArea;
}
int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
 int ans=maxWater(vec);
 cout<<ans;
}