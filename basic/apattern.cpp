#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n\n";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            cout<<" ";
        }
    }
    return 0;
}