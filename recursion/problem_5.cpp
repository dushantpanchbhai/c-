#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    
    bool further = sorted(arr +1,n-1);
    return (arr[0]<arr[1] && further==true);
}

int main()
{
    int arr[]={1,2,3,6,5,4};
    cout<<bool(sorted(arr,6))<<endl;

    return 0;
}