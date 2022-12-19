#include <iostream>
using namespace std;
void add(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;

    int n1 = n - 1;
    int m1 = m - 1;
    int size = max(m, n);

    int sum[size];
    int size1 = size;

    int k = 0;
    int s = 0;
    int carry = 0;

    while (n1 >= i && m1 >= j && size1 >= k)
    {

        s = arr1[n1] + arr2[m1] + carry;
        sum[size1] = s % 10;
        size1--;
        m1--;
        n1--;
        carry = s / 10;
    }
    // cout<<m1<<"                 ";
    // cout<<size1<<"  ";
    while (n1 >= i)
    {

        s = arr1[n1] + carry;
        carry = s / 10;
        sum[size1] = s % 10;
        n1--;
        size1--;
    }
    while (m1 >= j)
    {

        s = arr2[m1] + carry;
        carry = s / 10;
        sum[size1] = s % 10;
        m1--;
        size1--;
    }
    // cout<<carry;
    if (carry == 0)
    {
        for (int r = 1; r <= size; r++)
        {
            cout << sum[r] << "  ";
        }
    }
    else
    {

        while (carry != 0)
        {
            s = carry;
            carry = s / 10;
            sum[size1] = s % 10;
            size1--;
        }
        for (int r = 0; r <= size; r++)
        {
            cout << sum[r] << "  ";
        }
        
    }
}

int main()
{
    int arr1[] = {1, 9, 9};
    int arr2[] = {1, 9, 9};
    add(arr1, 3, arr2, 3);
    return 0;
}