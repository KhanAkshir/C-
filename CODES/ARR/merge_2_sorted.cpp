// Date: 2022-07-04
// Time:time: 12:43:33
// merge two sorted arr
#include <iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int farr[], int s)
{

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            farr[k] = arr1[i];
            i++;
        }
        else
        {
            farr[k] = arr2[j];
            j++;
        }
        k++;
    }
    // 1st arr ke remaining elements ko copy kardo final arr me
    while (i < n)
    {
        farr[k++] = arr1[i++];
    }
    // 2st arr ke remaining elements ko copy kardo final arr me

    while (j < m)
    {
        farr[k++] = arr2[j++];
    }

    for (int i = 0; i < s; i++)
    {
        cout << farr[i] << "  ";
    }
}

int main()
{
    int arr1[] = {9, 10, 11};
    int n = 3;
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int m = 7;
    int s = m + n;
    int farr[s];
    merge(arr1, n, arr2, m, farr, s);

    return 0;
}