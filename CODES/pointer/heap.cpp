#include<iostream>
using namespace std;
void change(int *n)
{
    *n=*n+1;
}
int main()
{
    int n;
    cin>>n;

    int *arr=new int[n];
    
    for(int i=0;i<n;i++)
    {
        *(arr+i)=0;//cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        change(arr+i);

    }
    
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<"  "; // or //cout<<arr[i]<<"  ";

    }
   cout<<"\n\n size\n\n";
    delete[]arr;
    
    cout<<sizeof(arr)<<"  "<< sizeof(*arr); 
    return 0;
}