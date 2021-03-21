#include<iostream>
#include<string>
using namespace std;

int friends(int n)
{
    if (n==0 || n==1 || n==2) 
    {
        return n;
    }
    return friends(n-1) + friends(n-2)*(n-1);

}

int main()
{
    int value[] = {1,5,6,8,4};
    int weight[] = {20,56,41,8,45};
    cout<<friends(7)<<endl;
    return 0;
}