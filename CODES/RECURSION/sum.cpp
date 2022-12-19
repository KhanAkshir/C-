#include <iostream>
using namespace std;
bool two(int n,int sum)
{
   sum = 0;
   if(n<=9)
   {
    return  false;
   }
    while (n != 0)
    {

        sum = sum + (n % 10);
        n = n / 10;
    }
    n = sum;
    if (sum == 1)
    {
        return true;
    }
    
    
    return two(n,sum); 
}
bool f(int n)
{
    while (n > 9)
    {
        int sum = 0;
        while (n != 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
        n = sum;
        if (n == 1)
        {
            return true;
        }
    }
    return false;
}

/////////////////////////////////////////////////
int main()
{
    cout << two(729,0);
    return 0;
}