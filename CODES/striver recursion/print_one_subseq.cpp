#include <iostream>
#include <vector>
using namespace std;
bool add(vector<int> &vec, int sum)
{
    int sum1 = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum1 = sum1 + vec[i];
    }
    if (sum1 == sum)
    {
        return true;
    }
    return false;
}
bool printF(int arr[], vector<int> &vec, int i, int n, int sum)
{
    if (i == n)
    {
        if (add(vec, sum))
        {
            for (auto it : vec)
            {
                cout << it << "  ";
            }
            return true;
        }
        return false;
    }
    vec.push_back(arr[i]);
    if (printF(arr, vec, i + 1, n, sum) == true)
    {
        return true;
    }
    vec.pop_back();
    if (printF(arr, vec, i + 1, n, sum) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {2, 1, 1};
    int n = 3;
    int sum = 2;
    int i = 0;
    vector<int> vec;
    printF(arr, vec, i + 1, n, sum);

    return 0;
}