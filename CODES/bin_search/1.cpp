//Find the first and last occurence of key in given array;
#include <iostream>
using namespace std;
int first(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + (e - s) / 2);
    int first=-1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            first=mid;
            e=mid-1;
            
        }

        if (key>arr[mid])
        {
            s = mid + 1;
        }
        else if(key<arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + (e - s) / 2);
    }
    
    return first;
}
int last(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + (e - s) / 2);
    int last=-1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            last=mid;
            s=mid+1;
            
        }

        if (arr[mid]<key)
        {
            s = mid + 1;
        }
        else if(key<arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + (e - s) / 2);
    }
    
    return last;
}
int main()
{
    int arr[] = {1,1,2,3,4,5,5, 5, 5, 6,6,6,6,6,6,6,6,6,6,6,6,6,6,6};
    int n = 24;
    int key = 6;
    /*int s = 0;
    int e = n - 1;
    int mid = (s + (e - s) / 2);
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            cout<< mid;
            return 0;
        
        }

        if (key>arr[mid])
        {
            s = mid + 1;
        }
        else if(key<arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + (e - s) / 2);
    }
    cout<<"not found-----------";
    */

    cout <<"first-----------  "<< first(arr, n, key)<<"\n";
    cout <<"last------------  "<< last(arr, n, key)<<"\n";
    int num;
   /* for(int i=first(arr, n, key);i<=last(arr, n, key);i++)
    {
    
        num++;
        
    }
    cout<<num;*/
    //or
    num=last(arr, n, key)+1-first(arr, n, key);//23+1-9
    cout<<num;

    return 0;
}