// Date: 2022-07-07
// Time:time: 11:32:38
#include <iostream>
using namespace std;
int getlen(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char name[20] = "";
    cout << name << "\n";
    cout << getlen(name);

    return 0;
}