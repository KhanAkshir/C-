// Date: 2022-07-05
// Time:time: 12:38:17
//my bakwas approach
#include <iostream>
using namespace std;
void right(int arr[], int n)
{
    int i = 0;
    int j = 0;
    while (j < n)
    {
        if (arr[j] != 0)
        {

            swap(arr[i] , arr[j]);
            i++;
            
        }
        j++;
        
    }
    //cout<<i<<"\n";
   /* while(i<n)
    {
        arr[i++]=0;
    }*/
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={0,1,0,2,3,0};
    int n=6;
    right(arr,n);
    return 0;
}