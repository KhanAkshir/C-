#include <iostream>
using namespace std;
int largest_row_sum(int arr[][4], int row, int col)
{
    int sum;
    int maxsum = INT_MIN;
    int index=-1;
    for (row = 0; row < 3; row++)
    {
        sum = 0;

        for (col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            index=row;
        }
        maxsum = max(maxsum, sum);
    }
    cout<<"index of row id>  "<<index<<"\n";
    return maxsum;
}
int largest_col_sum(int arr[][4], int row, int col)
{
    int sum;
    int maxsum = INT_MIN;
    int index=-1;
    for (col = 0; col < 4; col++)
    {
        sum = 0;

        for (row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            index=col;
        }
    }
    cout<<"index of col id>  "<<index<<"\n";
    return maxsum;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,70,8,9,10,11,12};
    cout<<"max sum among row\n_______________________________________________________\n";
    cout<<largest_row_sum(arr,3,4);
    cout<<"\n\nmax sum among col\n_______________________________________________________\n";
    cout<<largest_col_sum(arr,3,4);

    return 0;
}