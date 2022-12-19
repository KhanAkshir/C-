#include<iostream>
#include<string>
using namespace std;
int main()
{
    string m;
    m="abc";
    cout<<m<<"\n";
     if( !m.empty())
    {
        cout<<"hai be  (not empty) "<<"\n";
    }
    m.clear();
    if( m.empty())
    {
        cout<<"khali hai be (empty)";
    }
    return 0;

}