#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string h = "bbabbbdcrobcjl";
    // cout<<h[0]-'a';
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    for (int j = 0; j < h.size(); j++)
    {
        count[h[j] - 'a']++;
    }
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
            cout<<ans;
        }
    }
    cout << ans << " " << max1;

    return 0;
}
