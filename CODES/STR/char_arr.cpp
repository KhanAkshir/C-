//Date: 2022-07-07
//Time:time: 11:21:46
#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"enter your name   ";

    

    cin>>name;
    name[2]='\0';

    cout<<"your name is "<<name;
   // cout<<"   \n"<< name[2];
  // cout<<length name ;

    return 0;
}