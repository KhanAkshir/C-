// Date: 2022-07-05
// Time:time: 16:13:56
#include <iostream>
using namespace std;
void rotate(int arr[], int n, int key)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + key) % n] = arr[i];
    }

    

    for (int i = 0; i < n; i++)
    {
         arr[i] =temp[i];
    }
    for (int i = 0; i < n; i++)
    {
         cout<<arr[i] <<"    ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int key = 2;
    rotate(arr, n, key);
    

    return 0;
}