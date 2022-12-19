//VVI CODE 

#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        cout<<"\n";
        for(int j=1;j<=i;j++)
        {
            
                if((i+j)%2==0)

                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            
            
        }
            
        
    }
    return 0;
}