#include <iostream>
using namespace std;
int getbit(int n, int pos)
{
    if ((n & (1 << pos)) != 0)
    {
        return true;
    }
    return false;
}
int main()
{
    //    int p = 2;
    //  cout << (1 << p);
    cout << (4 & 1);
    cout << getbit(4, 2);
    return 0;
}