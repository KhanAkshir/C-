#include <iostream>
using namespace std;
int mountain(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = (s + ((e - s) / 2));
  while (s < e)
  {

    //   cout << "s1==" << s << "\n";
    // cout << "e1==" << e << "\n";
    // cout << "mid1--" << mid << "\n";

    if (arr[mid] < arr[mid + 1])
    {
      s = mid + 1;
      //  cout << "s==" << s << "\n";
    }
    else
    {
      e = mid;
      // cout << "e==" << e << "\n";
    }
    mid = (s + ((e - s) / 2));

    //  cout << "mid==" << mid << "\n\n";
  }
  cout << s << "\n";
  return arr[s];
}
int deepest(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = (s + ((e - s) / 2));
  while (s < e)
  {

    //   cout << "s1==" << s << "\n";
    // cout << "e1==" << e << "\n";
    // cout << "mid1--" << mid << "\n";

    if (arr[mid] < arr[mid + 1])
    {
      e = mid;
      //   cout << "e==" << e << "\n";
    }
    else
    {
      s = mid + 1;
    //  cout << "s==" << s << "\n";
    }
    mid = (s + ((e-s) / 2));

    //  cout << "mid==" << mid << "\n\n";
  }
  cout << s << "\n";
  return arr[s];
}
int main()
{
  int arr[] = {0, 1000, 5, 4, 3, 2}; /*array should be sorted
       in ascending order before peak and in descending order after peak element*/
  int n = 6;
  cout << "\nmountain element== ";
  cout << mountain(arr, n);
  int arr1[] = {9, 2, 3, 5};/*array should be sorted
       in descending order before peak and in ascending order after peak element*/
  int m = 5;
  cout << "\ndeepest element==  " << deepest(arr1, m);

  return 0;
}