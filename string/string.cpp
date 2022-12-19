#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string str1(5, 'n');
    string dtt="akshirraza";
    string fullline;
    getline(cin,fullline);
    cout<<fullline<<"\n";
    cout<<dtt<<"\n";
    cin>>str;
    cout<<str<<"\n";
    cout<<str1;
    //append
    /////////////////////////////////////
    cout<<"------------------------------------------------------------------------------------\n";
    string s1="aks";
    string s2="hir";
    cout<<s1+s2<<"\n";
    cout<<"or \n";
    s1.append(s2);
    string  *ptr= &s1;
    
    cout<<*ptr<<"\n";
    cout<<s1<<"\n";
    cout<<s1[2];
    return 0;

}