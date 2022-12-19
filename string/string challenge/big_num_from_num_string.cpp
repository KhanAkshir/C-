// SELF
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int temp;

    string num = "001020";
    for (int i = 0; i < num.size() - 1; i++)
    {
        for (int j = i + 1; j < num.size(); j++)

        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int f = 0; f < num.size(); f++)
    {
        cout << num[f];
    }
    return 0;
}