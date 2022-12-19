#include <iostream>
using namespace std;
void spiral(int arr[][3], int col, int row)
{
    int col1 = 0;
    int row1 = 0;
    int colf = col - 1;
    int rowf = row - 1;
    int total =row*col;
    int count=0;
    while (count <total)
    {
        int colly=col1;
        while (colly <= colf && count<total)
        {
            cout << arr[row1][colly] << "  ";
            colly++;
            count++;
        }
        
        row1++;
        int rowyy=row1;
        while (rowyy <= rowf && count<total)
        {
            cout << arr[rowyy][colf] << "  ";
            rowyy++;
            count++;
        }
        
        colf--;
        int colly1=colf;

        while (colly1 >=col1 && count<total)
        {
            cout << arr[rowf][colly1] << "  ";
            colly1--;
            count++;
        }
        
        rowf--;
        int rowyy1=rowf;
        while (rowyy1 >=row1 && count<total)
        {
            cout << arr[rowyy1][col1] << "  ";
            rowyy1--;
            count++;
        }
        
        col1++;
        
    }
}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    spiral(arr,3,3);
    return 0;
}