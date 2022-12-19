#include <iostream>
using namespace std;
void update(int **p)
{
  //p = p + 1;
 // cout<<"func---  "<<p<<"\n\n\n";
  *p=*p+1;
    // **p=**p+1;
}
int main()
{
    cout << "\n-------------------------------------------------------\n";
    int i[2]= {1,4};
    int *p = i;
    int **p2 = &p;

    cout << i[0] << "\n\n\n";
    cout << *p << "\n\n\n";
    cout << **p2 << "\n\n\n";
    //int o=sizeof(p2);
    //cout<<"size==== "<<o<<"\n\n\n\n";


    cout << "add"
         << "\n\n";
    cout << &i << "\n\n\n";
    cout << p << "\n\n\n";
    cout << *p2 << "\n\n\n";

    cout << &p << "\n\n\n";
    cout << p2 << "\n\n\n";

    cout << &p2 << "\n\n\n";

    update(p2);

    // cout<<p2<<"\n\n\n";
    cout << i[0] << "\n\n\n";
    cout << *p << "\n\n\n";
    cout << **p2 << "\n\n\n";

    cout << "add"
         << "\n\n";
    cout << &i << "\n\n\n";
    cout << p << "\n\n\n";
    cout << *p2 << "\n\n\n";

    cout << &p << "\n\n\n";
    cout << p2 << "\n\n\n";

    cout << &p2 << "\n\n\n";
    for(int j=0;j<2;j++)
    {
        cout<<i[j]<<"\n";
    }
    return 0;
}