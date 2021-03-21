#include<iostream>
using namespace std;

int main()
{
    int a=29;
    int*p=&a;

    cout<<*p<<endl;
    cout<<p<<endl;

    int **q=&p;
    cout<<**q<<endl;
    cout<<*q<<endl;
    return 0;
}