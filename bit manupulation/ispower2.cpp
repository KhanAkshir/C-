#include <iostream>
using namespace std;
int ispower(int n)
{
    if ((n && (n & (n - 1))) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << ispower(1); // 2^0;

    return 0;
}