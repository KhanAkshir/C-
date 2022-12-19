//VVI
//Date: 2022-06-09
//Time:time: 12:25:42
#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + (e - s) / 2);
    while (s < e)
    {
        if (arr[0] <= arr[mid])
        {
            s = mid + 1;
            // cout<<s<<"\n";
        }
        else
        {

            e = mid;
            // cout<<e<<"\n";
        }
        mid = (s + (e - s) / 2);
    }

    return s;
}
int bin_search(int arr[], int s, int e, int key)
{
    int mid = (s + (e - s) / 2);
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
        mid = (s + (e - s) / 2);
    }
    return -1;
}
int main()
{
    int arr[] = {56, 77, 88, 2, 4, 5};
    int n = 6;
    int k = 77;
    int p = pivot(arr, n);
    cout << "pivot is => " << p << "\n";
    if (k >= arr[p] && k <= arr[(n - 1)])
    {
        cout << "index => " << bin_search(arr, p, n - 1, k);
    }
    else
    {
        cout << "index=> " << bin_search(arr, 0, p - 1, k);
    }

    return 0;
}
