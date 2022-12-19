//Date: 2022-07-31
//Time:time: 08:04:11
#include<iostream>
using namespace std;
int product(int n)
{
    if(n==0)
    {
        return 1;
    }
    int pro;
    pro=n*product(n-1);
    return pro;
}
int main()
{
    cout<<product(12);
    return 0;
}