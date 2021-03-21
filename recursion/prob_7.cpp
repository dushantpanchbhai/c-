#include<iostream>
using namespace std;

void pos(int arr[],int n,int i,int find)
{
    if(n==0)
    {
        return;
    }
    if(arr[0]==find){
        cout<<i<<endl;
    }
    pos(arr+1,n-1,i+1,find);
    
}

int main()
{
    int arr[] ={1,2,3,6,2,3};
    pos(arr,6,0,10);
    return 0;
}