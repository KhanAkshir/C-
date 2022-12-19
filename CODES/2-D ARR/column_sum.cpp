// Date: 2022-07-12
// Time:time: 13:04:08
#include <iostream>
using namespace std;
void printsum_row(int arr[3][4], int row, int col)
{
    int sum;
    for ( row = 0; row < 3; row++)
    {
        sum = 0;
        for ( col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << "\n";
    }
}

void printsum_col(int arr[3][4], int row, int col)
{
    int sum;
    for (int col = 0; col < 4; col++)
    {
        sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 70, 8, 9, 10, 11, 12};
    for (int row = 0; row < 3; row++)
    {
        cout << "\n";
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << "  ";
            if (arr[row][col] == 12)
            {
                cout << "\n_______________________________________________________________";
                cout << "\nelement searched at ====\n";
                cout << row << "*" << col << "\n";
            }
        }
    }
    cout << "\n_______________________________________________________________\n";

    cout << "sum of rows are below-----\n";
    printsum_row(arr, 3, 4);

     cout << "\n_______________________________________________________________\n";

    cout << "sum of cols are below-----\n";
    printsum_col(arr,3,4);

    return 0;
}