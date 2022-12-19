#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter element\n";
    for(int p=0;p<n;p++)     
    {
        
        cin>>arr[p];//{5,4,3,2,1}
    }

    /////////////////////////////////////////////
    for(int i=1;i<n;i++)
    {
        int temp;
        temp=arr[i];
        int j=i-1;
        while(j >= 0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    //////////////////////////////////////////////
    for(int p=0;p<n;p++)    
    {
        cout<<arr[p]<<" ";
    }
    
    return 0;
}
