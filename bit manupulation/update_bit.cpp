#include <iostream>
using namespace std;

int clear(int n, int pos)
{
    return (n & ~(1 << pos));
}

int update(int n, int pos)
{
    n = clear(n, pos);

    return (n | (1 << pos));
}
int main()
{
    cout << clear(5, 2) << "\n";
    cout << update(5, 2);
    return 0;
}
