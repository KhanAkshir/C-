#include <iostream>
using namespace std;
int getbit(int h, int pos)
{
    if ((h & (1 << pos) != 0))
    {
        return 1;
    }
    return 0;
}
void unique(int arr[], int n)
{
    int idx[10];
    for (int i = 0; i < 10; i++)
    {
        idx[i] = 0;
    }


        for (int h = 0; h < n; h++)
        {
            if (getbit(arr[h], 0))
            {
                idx[0]++;

            }
        }
    
     for (int i = 0; i < 10; i++)
    {
        cout<<idx[i]<<"\n";
    }
}
int main()
{
    int arr[]={1,2,2,2,3,4,5};
    unique(arr,7);

    return 0;
}