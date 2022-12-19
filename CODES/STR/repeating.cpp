//INCORRECT
#include <iostream>
using namespace std;
int duplicate(char str[],int n)
{
    int i = 0;
    int k=n;
    int ansindex=0;
    while (i < k)
    {
        
        int j=i+1;
        
        while (j<k && str[i] == str[j])
        {
            j++;
        }
        str[ansindex++]=str[i];
        int count=j-i;
        if(count>1)
        {
            string cnt=to_string(count);
            for(char ch:cnt)
            {
                str [ansindex++]=ch;
            }
        }
        i=j;
    }
    return ansindex;
}

int main()


{
    char arr[]={'a','a','b','b','c','c','c'};
    cout<<duplicate(arr,7);
    return 0;
}