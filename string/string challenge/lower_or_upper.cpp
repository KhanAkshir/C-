#include <iostream>
#include <string>
using namespace std;
int main()
{
    // from lower to upper
    string str = "akssdhdfhdsd";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << "\n\n";

    // from upper to lower
    string str1="AKSHIR";
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>='A' && str[i]<='Z')
        {
            str1[i]+=32;
        }
    }
    cout<<str1;
    return 0;
}