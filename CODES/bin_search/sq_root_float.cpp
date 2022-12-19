// Date: 2022-06-08
// Time:time: 22:11:51

#include <iostream>
using namespace std;
int sq_root(int n)
{
    int s = 0;
    int e = n;
    int mid; //= s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        mid = s + ((e - s) / 2);
        if (mid * mid > n)
        {
            e = mid - 1;
        }
        if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        if (mid * mid == n)
        {
            return mid;
        }
        // mid=s+((e-s)/2);
        // cout<<"mid=="<<mid<<"\n";
    }
    return ans;
}
double decimal(int n, int pre, int temp)
{
    double factor = 1;
    double ans1 = temp;
    for (int i = 1; i <=pre; i++)
    {
        factor = factor / 10;
        cout<<"factor=="<<factor<<"\n";
        for (double j = ans1; j * j < n; j = j + factor)
        {
            cout<<"j=="<<j<<"\n";
            ans1 = j;
        }
    }
    return ans1;
}
int main()
{
    int n = 10;
    int s = sq_root(n);
    
    cout << decimal(n, 3, s);

    return 0;
}