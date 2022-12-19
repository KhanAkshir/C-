//Date: 2022-07-02
//Time:time: 18:11:19
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int m=n-1;
    //we can also use while loop here;
    for(int i=2;i<=m;i++)
    {
        int temp= arr[i];
         arr[i]=arr[m];
         arr[m]=temp;
         m--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int arr[]={11,7,3,12,4};
    int n=5;
    reverse(arr,n);

    

}