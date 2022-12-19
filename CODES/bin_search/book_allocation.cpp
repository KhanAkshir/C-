// Date: 2022-06-09
// Time:time: 15:03:50
#include <iostream>
using namespace std;
bool possible(int arr[], int n, int m, int mid)
{
    int pagesum = 0;
    int studentcount = 1;
    

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];

        }
        else
        {
            studentcount++;
            if(studentcount>m || arr[i]>mid)
            {
                return false;
            }
            else
            {
                pagesum=arr[i];
            }
        }
    }
    return true;
}
//////////////////////////////////////////////////////////////


int allocation(int arr[], int n,int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (possible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
int main()
{
    int arr[]={10,20,30,40};
    int n=4;
    int no_of_student=2;
    cout<<allocation(arr,n,no_of_student);

    return 0;
}