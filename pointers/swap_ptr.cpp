
#include <iostream>
using namespace std;
void swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    
    *b = temp;
    
}
int main()
{
    int a = 8;
    int b = 9;
    int *aptr=&a;
    int *bptr=&b;
    swap(aptr, bptr);
    //or swap(&a, &b);
    cout<<a<<" "<<b;
    return 0;
}