#include <iostream>
using namespace std;
bool isvalid(char g)
{

    if (g >= 'a' && g <= 'z' || g >= 'A' && g <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void rew(string sd)
{
    int s = 0;
    int e = sd.length() - 1;
    string temp1 = "";
    string temp2 = "";
    int i = e;
    while (s <= e)
    {

        if (sd[s] != ' ')
        {
            temp1.push_back(sd[s]);
            // temp2.push_back(sd[e]);
            s++;
        }
        else if (sd[e] != ' ')
        {
            temp2.push_back(sd[e]);
            e--;
        }
        swap(temp1,temp2);
    }
    cout<<sd;
    
}
string reverse(string st)
{
    int s = 0;
    int e = st.length() - 1;
    string temp[st.length()];
    int i = 0;
    while (s < e && i < st.length())
    {
        swap(st[s++], st[e--]);
    }
    return st;
}
int main()
{
    string st = "My name is love";
    //cout << reverse((st));
     rew(st);
    return 0;
}