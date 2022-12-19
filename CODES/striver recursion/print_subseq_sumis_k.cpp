#include <iostream>
#include <vector>
using namespace std;

bool add(vector<int> &vec,int k)
{
    int sum1=0;
    for(int i=0;i<vec.size();i++)
    {
        sum1=sum1+vec[i];
    }
    if(sum1==k)
    {
        return true;
    }
    return false;
    }

void printF(int arr[], vector<int> &ds, int i, int n,int sum)
{
    if (i == n)
    {
        if(add(ds,sum))
        {
        for (auto it : ds)
        {
            cout << it << "  ";
        }
        cout << endl;

        }
        return;

        
    }
    printF(arr, ds, i + 1, n,sum);
    ds.push_back(arr[i]);
    printF(arr, ds, i + 1, n,sum);
    ds.pop_back();
}
int main()
{
    int arr[] = {3, 2, 1};
    vector<int> ds;
    int i = 0;
    int n = 3;
    int sum=2;
    printF(arr, ds, i, n,sum);
    return 0;
}