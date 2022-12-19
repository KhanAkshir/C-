#include<iostream>
using namespace std;
  int countPrimes(int n) 
    {
        int arr[n+1];
		for(int i=0;i<n+1;i++)
		{
			arr[i]=true;
		}

        arr[0]=arr[1]=false;
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(arr[i]==true)
            {
				//cout<<"i==" << i<<"  ";
                count++;
                for(int j=2*i;j<n;j+=i)
                {
					//cout<<"j--" << j<<"  ";
                    arr[j]=0;
                }
            }
        }
        return count;
    }
int main()
{
	int n=10;
	 cout<<countPrimes(n);

	return 0;
}