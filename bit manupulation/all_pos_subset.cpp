#include <iostream>
using namespace std;
void subseq(int arr[], int n)
{
    for (int k = 0; k < (1 << n); k++)
    {
        
        for (int j = 0; j < n; j++)
        {

            if (k & (1 << j))
            {
                cout << arr[j] <<" ";
            }
        }
        cout << endl;
    }
}
int main()
{
    
 //  cout << (7& 4);
    int arr[3] = {1, 2, 3};
    int n = 3;
    subseq(arr, n);
    return 0;
}