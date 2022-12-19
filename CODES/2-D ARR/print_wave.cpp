// Date: 2022-07-12
// Time:time: 14:31:44
#include <iostream>
using namespace std;
void wave(int arr[][4], int col, int row)
{
    for (col = 0; col < 4; col++)
    {

        if (col % 2 == 0)
        {
            for (row = 0; row < 3; row++)
            {
                cout << arr[row][col]<<" ";
            }
        }
        else
        {
            for (row = 2; row >= 0; row--)
            {
                cout << arr[row][col]<<" ";
            }
        }
    }
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    wave(arr,4,3);

    return 0;
}