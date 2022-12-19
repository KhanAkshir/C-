// Date: 2022-07-05
// Time:time: 10:52:52
#include <iostream>
using namespace std;
void ins(int arr[], int n, int key, int ele)
{
    n = n + 1;
    for (int i = n; i >= key; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[key] = ele;
}
void del(int arr[], int n, int key)
{

    for (int i = key; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void add_arr(int arr1[], int n, int arr2[], int m)
{
    
    int i = 0;
    int k = 0;
    while (i < m && k <=n)
    {

        if (arr2[i] < arr1[k])
        {
            ins(arr1, n, k, arr2[i]);
            i++;
            k++;
        }
        else
        {
            k++;
        }
    }
    n=m+n;
    while (k < n)
    {
        arr1[k++] = arr2[i++];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}
int main()
{
    int n = 3;
    int arr1[n] = {1, 23, 33};
    int m = 3;
    int arr2[m] = {0, 5, 6};

   //  ins(arr1,n,0,34);
     /*for(int i=0;i<n;i++)
     {
        cout<<arr1[i]<<" ";
     }*/
    //  del(arr, n,2);
    add_arr(arr1, n, arr2, m);
    return 0;
}