#include<iostream>
using namespace std;

int countPath(int a,int b)
{
    if (a==b)
    {
        return 1;
    }
    if (a>b){
        return 0;
    }

    int count =0;

    for(int i=1;i<=6;i++)
    {
        count += countPath(a+i,b);
    }
    return count;
}

int main()
{
    cout<<countPath(0,3)<<endl;
    return 0;
}