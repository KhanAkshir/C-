#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
char c(string h)
{

    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    for (int j = 0; j < h.size(); j++)

    {
        char ch = h[j];
        if (ch >= 'a' && ch <= 'z')
        {
            count[ch - 'a']++;
        }
        else
        {
            count[ch-'A']++;
        }
    }

    //////////////////////////////////////////////////
    char ans = 'a';
    int max1 = INT_MIN;

    /*  for (int i = 0; i < 26; i++)
        {
            cout << count[i] << "  ";
        }
    */

    for (int i = 0; i < 26; i++)
    {
        max1 = max(count[i], max1);

        if (count[i] == max1)
        {
            ans = i + 'a';
            // cout<<ans;
        }
    }
    return ans;
}
int main()
{
    string h = "aVbVVVVVVVVVvvvvvdcrobBBBBBBBBBBcjl";
    cout << c(h);
    // cout<<h[0]-'a';

    return 0;
}
