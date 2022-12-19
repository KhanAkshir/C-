#include <iostream>
using namespace std;
string spaces(string str)
{
    // Write your code here
     //cout<<str.length()<<"             ";
    string temp = "";
 
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] ==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
            
        }
        else
        {
           temp.push_back(str[i]);
        }
    }
    //str = temp;
    //cout<<str.length()<<'\n';
    return temp;
}
int main()
{
    string str = "MY NAME IS KHAN";
    cout << spaces(str);
    return 0;
}