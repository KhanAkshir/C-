#include <iostream>
#include <vector>
using namespace std;

void combination(int arr[], vector<int> &ds, int i, int n, int sum)
{
    if (i == n)
    {
        if (sum == 0)
        {
            for (auto it : ds)
            {
                cout << it << "  ";
            }
            cout << endl;
        }
        return;
    }

    if (arr[i] <= sum)
    {
        ds.push_back(arr[i]);
        combination(arr, ds, i, n, sum - arr[i]);
        ds.pop_back();
    }
    combination(arr, ds, i + 1, n, sum);
}
int main()
{
    int arr[] = {1,2,3};
    int n = 3;
    int i = 0;
    vector<int> ds;
    int sum = 7;
    combination(arr, ds, i, n, sum);
    return 0;
}