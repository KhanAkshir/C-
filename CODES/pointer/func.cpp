#include <iostream>
using namespace std;
void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}
void update(int *p)
{
    *p = 90;

    cout << p << endl;
}
int getsum(int arr[], int n)
{
    // cout<<sizeof(arr)<<endl;
    arr[2] = 89;
    int sum = 0;
    // cout<<arr;

    for (int i = 0; i < n; i++)
    {
        //  cout<<i[arr]<<endl;
        sum = sum + *(arr + i);
    }
    return sum;
}
int main()
{
    
    int i=9;
    int*ptr=&i;
    print(ptr);
    update(ptr);
    cout<<i<<endl;

    print(ptr);



/*
    int arr[] = {1, 2, 3, 4, 5};

    cout << getsum(arr + 2, 3) << endl;

    cout << "\n\n\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }*/

    return 0;
}