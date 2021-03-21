#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0) return 1;
    int previous = fact(n-1);
    return n*previous;
}


int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}