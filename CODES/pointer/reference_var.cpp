#include<iostream>
using namespace std;
void in(int &n)
{
    n++;
}
int& pi(int g)
{
    int num=g;
    int &j=num;
    j++;
    return j;
}
int main()
{
    int i=6;
    int &j=i;
    cout<<&j<<"\n\n";
    cout<<&i<<"\n\n";
    in(j); /*==*/ in(i);
    cout<<i<<"\n";
   // int *G=0;    cout<<"\n"<<*G;
   cout<<pi(i)<<"\n";
   cout<<i;
    return 0;
}