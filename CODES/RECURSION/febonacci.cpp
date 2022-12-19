#include <iostream>
using namespace std;

void febonacci(int n1, int n2, int i)
{
    //   int n1 = 0;
    // int n2 = 1;
    // cout << n1 << "  " << n2<<"  ";
    if (i == 7)
    {
        return;
    }

    int new_n1 = n1;
    n1 = n2;
    n2 = new_n1 + n2;
    cout << n2 << "  ";
    i++;

    febonacci(n1, n2, i );
}
int main()

{
    cout << 0 << "  " << 1 << "  ";

    febonacci(0, 1, 0);
    return 0;
}