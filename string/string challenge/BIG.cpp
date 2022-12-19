#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="1343494";
    sort(s.begin(),s.end(),greater<int>()); //stl standard templet lib..
    cout<<s<<" ";
    return 0;
}