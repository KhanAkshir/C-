//here tail recursion is used so it is called backtracking

#include <iostream>
using namespace std;
void print(int n,int i)
{
    if(n<i)
    {
        return  ;

    }
    
    print(n-1,i);

    

    cout<<n<<"   ";
}
int main()
{
    print(6,1);
    return 0;
}
