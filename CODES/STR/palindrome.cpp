#include <iostream>
using namespace std;
bool isvalid(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
char tolower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindreome(string name)
{

    int s = 0;
    int e = name.length() - 1;
    while (s < e)
    {

        //cout << "Ef   " << e << "   \n";
        //cout << "Sf   " << s << "   \n";
        if (isvalid(name[s]) == 0)
        {
            s++;
            //cout << "s1===" << s << "  \n";
        }
        else if (isvalid(name[e]) == 0)
        {
          
            e--;
              //cout << "e1===" << e << "  \n";
        }

        else if (tolower(name[s]) != tolower(name[e]))

        {
            cout << s << "  " << e << "  \n";
            return false;
        }
        else
        {
            e--;
            s++;
        }
    }
    return true;
}

int main()
{
    string s = "N2 i&nJA?a& jnI2n";

    //  cout<<i<<"\n";
    // char a=' ';
    // cout << isvalid(a);
    cout << palindreome(s);

    return 0;
}