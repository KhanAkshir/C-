#include <iostream>
using namespace std;

int fibonacci(int n)
{
 /*
 // FOR SATRTING FROM 1;
    if (n == 0)
    {
        return 0;
    }
    if(n>0 && n<=3)
    {
        return 1;
    }
    */
   //FOR STSARTING FROM 0;
   if(n<=1)
   {
    return n;
   }

    int num = fibonacci(n -2) + fibonacci(n -1);
    return num;
}

int main()
{
    cout << fibonacci(6);
    return 0;
}