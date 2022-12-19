#include<iostream>
using namespace std;
int  sum(int n,int i)
{
    if(i==n+1)
    {
        return 0;
    }
    //i++;
    int add=i+sum(n,i+1);
    return add; 
}
int main()
{
    cout<<sum(3,0);
    return 0;
}