#include<iostream>
using namespace std;
void print(int n,int i)
{
    if(n<i)
    {
        return;
    }
    cout<<n<<"  ";
    print(n-1,i);

}
int main()
{
    print(6,1);
    return 0;
}