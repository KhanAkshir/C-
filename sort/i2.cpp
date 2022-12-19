#include <iostream>
using namespace std;
void insert(int arr[],int k,int n )
{
    n=n+1;
    int ele;
    cout<<"enter the element you want to insert\n\n--  ";
    cin>>ele;
    for(int i=n-1;i>=k;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[k]=ele;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void dlete(int arr[],int k,int n )
{
    bool g=false;
    for(int i=k;i<n;i++)
    {
        arr[i]=arr[i+1];
        g=true;
    }
    if(g)
    {
    n=n-1;
    }
    


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={5,6,7,8,9};
    int n=5;
    int k=3;
    insert(arr,k,n);
    cout<<"===========================================\n\n\n";
    n=n+1;
    dlete(arr,k,n);
    return 0;
}