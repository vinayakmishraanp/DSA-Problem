#include <iostream>

using namespace std;

int targetFun(int a)
{
int b[]={2,9,7,6};
for(int i=0;i<=4;i++)
{
    for(int j=i+1;j<4;j++)
    {
        if(b[i]+b[j]==a)
        {
            cout<<b[i]<<" "<<i<<" "<<b[j]<<" "<<j<<endl;
            return 0;
        }
    }
}
}
int main()
{
    cout<<targetFun(9);
    return 0;
}