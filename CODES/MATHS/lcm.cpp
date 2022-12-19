#include <iostream>
using namespace std;
int gcd(int n1, int n2)
{
    if (n1 == 0)
    {
        return n1;
    }
    if (n2 == 0)
    {
        return n2;
    }
    else
    {
        while (n1 != n2)
        {
            if (n1 < n2)
            {
                n2=n2-n1;
            }
            else
            {
                n1=n1-n2;

            }
        }
    }
    return n1;
}
int lcm(int n1,int n2)
{
    int hcf=gcd(n1,n2);
    int l=(n1*n2)/hcf;
    return l;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"gcd-->"<<gcd(n1,n2)<<"\n";
    cout<<"lcm-->"<<lcm(n1,n2)<<"\n";    
    return 0;
}