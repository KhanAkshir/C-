#include<iostream>
using namespace std;
 void dest(int d,int src)
{
    cout<<src<<"  ";



    if (src==d)
    {
        cout<<"pahuch gye--------\n";
        return ;
        
    }
    src++;
    
    //recursive call;
    dest(d,src);
    
}

int main()
{
    dest(3,0);
    return 0;
}