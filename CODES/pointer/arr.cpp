#include <iostream>
using namespace std;

int main()
{
    //int arr[] = {1, 5, 41, 43};
    /*cout << arr << "\n"
         << *arr << "\n"; // here no need to right & ;

    cout << "\n"
         << *(arr + 1);
    cout << "\n"
         << *arr + 1;

    cout << "\n"
         << *(arr + 2);

         
    int temp[10]={1,20,3,4,5,6,7,8,9,89};
    int *ptr=&temp[0];
    cout<<*ptr+1<<"\n"<<*(ptr+1)<<"\n";
    cout<<sizeof(temp)<<"\n";
    cout<<sizeof(ptr)<<"\n";
 
*/
/*int n = 4;
    for (int i = 0; i < n; i++)
    {
        int k=0;
        
        //k=(i+arr);  or
        k=*(arr+i);
        cout<<k<<"\n";
        cout<<arr+i<<"\n";
    }

int *ptr=&arr[0];
cout<<"\n"<<*ptr<<"\n";
cout<<"\n"<<&ptr<<"\n";
cout<<"\n"<<&arr[0]<<"\n";
*/
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int *ptr=&arr[0];
cout<<ptr<<"\n\n";
cout<<"-->"<<*(arr+9)<<"\n\n";
cout<<ptr<<"\n";
cout<<*(arr)<<"\n";
cout<<*(arr+1)<<"\n";


    return 0;
}