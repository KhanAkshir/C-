#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + ((e - s) / 2);
    }
    // cout << arr[s] << "\n";
    return s;
}
int binsearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
     int arr[] = {20, 123, 0, 2, 3, 7};
    int n = 6;
    int s = pivot(arr, n);
    int e = n - 1;
    int key = 20;
    if (key >= arr[s] && key <= arr[e])
    {
        cout << binsearch(arr, s, e, key);
    }
    else
    {
        cout << binsearch(arr, 0, s - 1, key);
    }
    return 0;
}