#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "akshirraza";
    string s1= s.substr(4,4);
    cout<<s1<<"\n";
    cout << s.insert(3, "lol") << "\n";
    cout << s.size() << "\n";
    cout << s.find("hirraza") << "\n";
    s.erase(0, 3);
    cout << s;

    return 0;
}