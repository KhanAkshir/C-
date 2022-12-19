// Date: 2022-06-10
// Time:time: 10:45:38
#include <iostream>
using namespace std;
bool ispossible(int arr[], int m, int n, int mid)
{
    int boardsum = 0;
    int paintercount = 1;
    for (int i = 0; i < n; i++)
    {
        if (boardsum + arr[i] <= mid)
        {
            boardsum += arr[i];
        }
        else
        {
            paintercount++;
            if (paintercount > m || arr[i] > mid)
            {
                return false;
            }
            else
            {
                boardsum = arr[i];
            }
        }
       
    }
     return true;
}
///////////////////////////////////////////////////////////////


int painter(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    int ans = -1;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, m, n, mid))
        {
            ans = mid;
            e = mid-1 ;
        }
        else
        {
            s = mid + 1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[]={5,5,5,5};
    int n=4;
    int m=2;
    cout<<painter(arr,n,m);

    return 0;
}