#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40};
    int *ptr=arr;
    cout<<"*ptr is "<<*ptr<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}