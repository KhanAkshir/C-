//Date: 2022-07-21
//Time:time: 11:19:20
#include<iostream>
using namespace std;
int main()
{
   /* int i=9;
    int *ptr=&i;
    cout<<"\n"<<(*ptr)++<<"\n";// *(ptr)++ or *ptr++ would not work
    cout<<"\n"<<i++<<"\n";
    cout<<"\n"<<i<<"\n";*/

    /*int g=9;
    int *ptr1=0;
    *ptr1=g;
    cout<<"\n"<<*ptr1++<<"\n";*/

    
    int j=9;
    int h=90;
    int *ptr2=&h;
    *ptr2=j;
    cout<<"\n"<<h++<<"\n";


    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<"\n"<<sizeof(ptr2)<<"\n\n\n";

    int *u=arr;
    u++;
    cout<<*u<<"\n";

    char drr[5]="Ashr";
    char*k=drr;
    k++;
    cout<<k<<"\n";




    return 0;
    
}
