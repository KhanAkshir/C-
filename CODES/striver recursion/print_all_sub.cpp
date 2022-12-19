#include <iostream>
#include <vector>
using namespace std;

void printF(int arr[], vector<int> &ds, int i, int n)
{
    if (i == n)
    {
        
        for (auto it : ds)
        {
            cout << it << "  ";
        }
        
        cout << endl;

        return;
    }
  ds.push_back(arr[i]);
    printF(arr, ds, i + 1, n);
      
    ds.pop_back();
    printF(arr, ds, i + 1, n);
    
    
}
int main()
{
    int arr[] = {3, 2, 1};
    vector<int> ds;
    int i = 0;
    int n = 3;
    printF(arr, ds, i, n);
    return 0;
}