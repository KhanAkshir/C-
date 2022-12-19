#include <iostream>
using namespace std;
int getbit(int h, int n)
{
    if ((h & (1 << n)) != 0)
    {
        return 1;
    }
    return 0;
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;

    int getbit1 = 0;
    int pos = 0;
    while (getbit1 != 1) // this is just for pos;
    {
        getbit1 = xorsum & 1;

        pos++;

        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int k = 0; k < n; k++)
    {
        if (getbit(arr[k], pos - 1))
        {
            newxor = newxor ^ arr[k];
        }
    }
    int secondelement = tempxor ^ newxor;
    cout << secondelement << "\n"
         << newxor;
}
int main()
{
    int arr[] = {2, 4, 6, 3, 6, 4};
    int n = 6;
     unique(arr, n);
    return 0;
}