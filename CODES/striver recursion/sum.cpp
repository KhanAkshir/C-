#include <iostream>
using namespace std;
void sum(int n, int s)
{
    if (n == 0)
    {
        cout << s;
        return;
    }
    //    cout<<"he===  "<<n<<"  \n";
    //  cout<<"he==  "<<s<<"  \n";
    sum(n - 1, s += n);
}
int main()
{
    sum(2, 0);
    return 0;
}