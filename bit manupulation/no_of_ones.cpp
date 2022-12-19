#include <iostream>
using namespace std;
int ones(int n)
{
    int num = 0;

    while (n != 0)
    {
        n = (n & (n - 1));
        cout<<n<<"\n";
        num++;
    }
    return num;
}
int main()
{
    cout << ones(19);
    return 0;
}