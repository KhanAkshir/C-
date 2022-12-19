#include<iostream>
using namespace std;
char tolower(char d)
{
    if(d>='a' && d<='z')
    {
        return d;
    }
    else{
        char temp=d-'A'+'a';
        return temp;
    }
}
bool palindrome(string str,int s,int e)

{
    if(s>=e)

    {
        return true;
    }
    if(tolower(str[s])!=tolower(str[e]))
    {
        return false;
    }
    
    return palindrome(str,s+1,e-1);

}
int main()
{
    string str="MADaM";
    //cout<<str.length()<<"\n";
    cout<<palindrome(str,0,4);
    return 0;
}