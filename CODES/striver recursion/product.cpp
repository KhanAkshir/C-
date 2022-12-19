#include<iostream>
using namespace std;

void product(int i,int p)
{
    if(i<1)
    {
        cout<<p;
        return ;
    }
    product(i-1,p*i);
}
int main()
{
    product(12,1);
    return 0;
}