#include <iostream>
using namespace std;
int add(int n)
{
    if (n < 1)
    {
        return 0;
    }
    int sum;
    sum = n + add(n - 1);
    return sum;
}
int main()
{
    cout << add(3);

    return 0;
}