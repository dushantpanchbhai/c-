#include<iostream>
using namespace std;

int main()
{
    int a=19;
    int *d=&a;

    cout<<&a<<endl;
    cout<<d<<endl;
    cout<<*d<<endl;
    
    *d=10;
    cout<<a<<endl;
    return 0;
}