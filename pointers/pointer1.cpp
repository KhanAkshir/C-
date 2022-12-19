//pointers ar the variable which stores address of other variables.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;
    aptr=&a;
    //int *aptr=&a;
    cout<<&a<<"\n";
    cout<<aptr<<"\n";
    cout<<*aptr<<"\n"; //dereferencing 
    cout<<a<<"\n";
    *aptr=50;
    //now the value of a has been changed
    cout<<a<<"\n";

    return 0;
}
