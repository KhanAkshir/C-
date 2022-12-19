//greatest common divisor
#include<iostream>
using namespace std;
int gcd(int num1,int num2)
{
    if(num1==0)
    {
        return num2;
    }
    if(num2==0)
    {
        return num1;
    }
    else
    {
        while(num1!=num2)
        {
            if(num1>num2)
            {
                num1 =num1-num2;
            }
            if(num2>num1)
            {
                num2=num2-num1;
            }

        }
    }
    return num1;
}
int main()
{
    cout<<gcd(9,12);
    return 0;
}