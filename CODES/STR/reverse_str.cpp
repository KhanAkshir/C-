#include<iostream>
using namespace std;
void reverse(char name[])
{
    int s=0;
    int i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    int e=i-1;
    while(s<e)
    {
        char temp=name[s];
        name[s]=name[e];
        name[e]=temp;
        s++;
        e--;
    }
    cout<<name;
}
int main()
{
    char name[20]="Akshir";
    reverse(name);

    return 0;
}