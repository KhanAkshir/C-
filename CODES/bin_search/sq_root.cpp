#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr1[]={5,9,16,25,36,49};
    int n=6;
    float arr2[n];
    for(int i=0;i<n;i++)
    {
        float p=0;
        p=p+sqrt(arr1[i]);
        arr2[i]=p;

    }
    for(int i=0;i<n;i++)
    {
        
        cout<<arr2[i]<<"\n";

    }
    return 0;
}
