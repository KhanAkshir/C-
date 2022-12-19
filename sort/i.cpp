#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {4, 3,6, 1, 2};
    int i = 0;
    int j=n-1;
    int new_n=n;
    while (j >= i)
    {
        int temp = arr[i];
        arr[i] = arr[j];

        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < new_n; i++)
    {

        cout << arr[i] << "   ";
    }

    return 0;
}