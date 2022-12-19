#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *u=arr;
    cout<<u<<endl;
    char ch[7]="akshir";
    //cout<<&ch[0];
    char *ptr=&ch[0]; // or    char *ptr=ch;
    cout<<ptr<<"\n";
    
    int g=90;
    int *mn=&g;

   cout<<"\n"<<mn<<"\n";
    *mn=45;
    cout<<"\n"<<mn<<"\n";
     g=g+9;
     cout<<"\n"<<mn<<"\n";
    cout<<"\n"<<*mn<<"\n";

    char f='c';
    char *p=&f;
    cout<<p<<endl;

    return 0;
}