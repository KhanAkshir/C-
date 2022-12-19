#include <iostream>
using namespace std;
int main()
{
    /*
    int g=90;
    float h=8.4;
    void*p=&g;
    //p=&h;
    cout<<*(int *)p<<"  ";*/
    int m = 2;
    void *po = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin>>*((int*)po+i);
    }
    for (int i = 0; i < m; i++)
    {
        cout<<*((int*)po+i)<<"  ";
    }
    cout<<"\n\n";
//type casted to float
    for (int i = 0; i < m; i++)
    {
        cin>>*((float*)po+i);
    }
    for (int i = 0; i < m; i++)
    {
        cout<<*((float*)po+i)<<"  ";
    }
    return 0;
}