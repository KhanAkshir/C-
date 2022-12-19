#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="akshdeirer";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<"\n";
    string g="AKSHIR";
    transform(g.begin(),g.end(),g.begin(),::towlower);
    cout<<g<<"\n";


    return 0;
}