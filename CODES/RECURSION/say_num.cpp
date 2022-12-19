#include <iostream>
using namespace std;
void say(int n , string arr[])
{
    if(n==0)
    {
        return ;
    }
    int digit =n%10;
    n=n/10;
    say(n,arr);
    cout<<arr[digit]<<" ";

}
int main()
{
    string arr[11]={"ZETO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN"};
    say(15421343,arr);
    return 0;
}