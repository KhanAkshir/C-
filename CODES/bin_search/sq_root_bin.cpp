// Date: 2022-06-08
// Time:time: 19:49:47
//  finding sq root of num by using binary search.

#include <iostream>
using namespace std;
long long int sq_root(long long int n)
{
    int s = 0;
    int e = n;
    long long int mid; //= s + ((e - s) / 2);
    long long int ans = -1;
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
int main()
{
    long long int n = 1000000;
    cout << sq_root(n);

    return 0;
}
/* long long int is used for large numbers since at the time of squaring 
i.e. mid*mid can be equal to more than range of an integer*/