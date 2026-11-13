#include<iostream>
using namespace std;
#include <iterator>
int findVal(char h[],int k)
{
       for(int i=0;i<k;i++)
       {
         char g[]={'0'};
         int l=0;
        while(g[l]!=h[i])
        {
            g[l]=h[i];
            cout<<g[l]<<" ";
            l++;
            
        }
         }
       }
    


int main()
{    char h[]={'a','b','c','b','b'};
    int k=sizeof(h)/sizeof(h[0]);
    findVal(h,k);
    return 0;
}