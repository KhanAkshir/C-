#include <iostream>
using namespace std;
int main()
{ 
     int g=90;
     int *gptr=&g;

     cout<<g<<" address "<<gptr<<"\n";
     g++;
     cout<<g<<" address "<<gptr<<"\n";
     
  
    int arr[] = {1, 2, 34};
    cout << *arr<<"\n";
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<" address "<<ptr<<"\n";
        ptr++;
    }
    cout<<"\nor\n";
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<" address "<<ptr<<"\n";
    
    }
    return 0;
}
