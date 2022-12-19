#include <iostream>
using namespace std;
void reverse(int *arr, int s, int e)
{
    if (s == e)
    {
        // cout<<arr[e]<<"  ";

        return;
    }
    if (s > e)
    {
        return;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    // cout<<arr[s]<<"  ";

    reverse(arr, s + 1, e - 1);
    // cout<<arr[e]<<"  ";
}
int main()
{
    int arr[] = {1, 5, 6, 7, 8, 2, 3, 4};

cout << "\n-----------------------------------------------------------------------------\nBefore.............................\n";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "  ";
    }


    reverse(arr, 0, 7);


    cout << "\n-----------------------------------------------------------------------------\nAfter.............................\n";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}