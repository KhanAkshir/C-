#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int **arr=new int*[n]; 
    int m=3;    
      
    for(int i=0;i<n;i++)
    {
        *(arr+i)=new int[m];

    }
  //  cout<<arr<< "    "<<  *arr<<"\n"<<&(**arr);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)

     
    {
        cout<<"\n\n";
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
    }

    for(int i=0;i<n;i++)
    {
        delete []arr[i];

    }
    delete []arr;

    return 0;
}