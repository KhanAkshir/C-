//Date: 2022-07-05
//Time:time: 18:20:13
#include <iostream>
using namespace std;
int check(int arr[], int n)
{
    
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            count++;
        }
    }
    //below is vvi part I missed it at 
    //Date: 2022-07-05
    //Time:time: 18:33:16
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    
    if (count <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 3, 4, 5,1};
    int n = 5;
    cout << check(arr, n);
    return 0;
}
