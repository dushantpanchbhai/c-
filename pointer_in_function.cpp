#include<iostream>
using namespace std;

void sum(int *a)
{
    *a = *a + 1;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10;
    int b=38;
    sum(&a);
    cout<<"a is "<<a<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}