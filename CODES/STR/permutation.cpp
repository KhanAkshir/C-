#include <iostream>
using namespace std;
bool check(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}
/////////////////////////////////////////////
bool compare(string s1, string s2)
{
    // s1 is smaller string
    int count1[26] = {0};
   /* for(int i=0;i<26;i++)
    {
        cout<<count1[i]<<"  ";
    }*/

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';

        count1[index]++;
    }

    int i = 0;
    int window = s1.length();
    int count2[26] = {0};
    while (i < window && i<s1.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (check(count1, count2))
    {
        return 1;
    }
    // cout << j;

    while (i < s2.length() )
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        

        char oldchar = s2[i - window];
        int index1 = oldchar - 'a';
        count2[index1]--;
        i++;
        if (check(count1, count2))
        {
            return true;
        }
    }

    return false;
}
int main()
{
    string str = "eubaooo";
    string pu = "ab";
    cout << compare(pu, str);
    return 0;
}