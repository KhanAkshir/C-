#include <iostream>
using namespace std;
int main()
{
    /*int n;
    cout<<"enter the num of element in arr\n";
    cin>>n;
    int arr[n];*/
    int n = 8;
    int arr[n] = {2, 4, 4, 4, 6, 3, 4, 6};

    /* for(int h=0;h<n;h++)
     {
         cin>>arr[h];
     }*/
    cout << "\n----------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        for (int j = 0; j < n; j++)
        {

            if ((arr[i] ^ arr[j]) == 0)
            {
                num++;
            }
        }
        if (num == 1)
        {
            cout << arr[i] << "\n";

            break;
        }
    }
    return 0;
}