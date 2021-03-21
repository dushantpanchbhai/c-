#include<iostream>

using namespace std;

void reverse(int arr[],int n)
{
    for(int i=0;i<int(n/2);i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n=9;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    reverse(arr,n);
    return 0;
}