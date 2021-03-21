#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int ans;
        ans = n + sum(n-1);
        return ans;
    }
}

int main()
{
    int a = sum(5);
    cout<<a<<endl;
    return 0;
}