#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s="786";
    int x=stoi(s);
    cout<<x<<endl;
    cout<<to_string(x)+"3"<<"\n\n";// back to string ;
    cout<<"------------------sorting--------------------\n";
    string h="dcba";
    sort(h.begin(),h.end());
    cout<<h<<"\n";


    return 0;
}