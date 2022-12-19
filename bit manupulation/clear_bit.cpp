#include<iostream>
using namespace std;
int clear(int n,int pos)
{
    return (n&(~(1<<pos)));
}
int main()
{
    cout<<clear(5,3);
    
    return 0;
}