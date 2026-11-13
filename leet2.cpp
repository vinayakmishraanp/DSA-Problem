#include <iostream>
using namespace std;
void sumFunction(int a[],int b[],int n)
{
    int result[100];
    int sum=0;
    int carry=0;
    for(int i=n-1;i>=0;i--)
    {
        sum=a[i]+b[i]+carry;
       
        carry=sum/10;
        result[i]=sum%10;
        cout<<result[i]<<" ";
    }
    // int sumArr[]={sum};
    // for(int i=0;i<sumArr.size();i++)
    // {
    //     cout<<sumArr[i];
    // }
  
}

int main()
{
    int a[]={9,9,9,9,9,9,9};
    int b[]={9,9,9,9};
    int n=sizeof(a)/sizeof(a[0]);
    sumFunction(a,b,n);
return 0;
}

