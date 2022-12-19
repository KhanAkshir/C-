#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factor;
    factor=n*fact(n-1);
    return factor;
}
int main()
{
    cout<<fact(3);
    return 0;
}