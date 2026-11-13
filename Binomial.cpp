// #include <iostream>
// using namespace std;

// int bioFunction(int n,int r){
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     int fact1=1;
//     for(int i=1;i<=r;i++)
//     {
//         fact1*=i;
        
//     }
//     int fact2=1;
//     for(int i=1;i<=(n-r);i++)
//     {
//         fact2*=i;
//     }
//     cout<<fact<<" "<<fact1<<" "<<fact2<<endl;
//     return fact/(fact1*fact2);

// }

// int main()
// {
//     cout<<bioFunction(5,2);
// }





#include<iostream>
using namespace std;

int factorial(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
{
    fact*=i;
    cout<<fact<<endl;
}
return fact;
}
int binCoff(int n,int r)
{
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);
    cout<<val1<<" "<<val2<<" "<<val3<<endl;
    return val1/(val2*val3);
}
int main()
{
    cout<<binCoff(6,3);
}


