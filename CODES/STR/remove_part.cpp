#include <iostream>
using namespace std;
string f(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string s="daabcbaabcbc";
    string p="abc";
    cout<<f(s,p);
    return 0;
}