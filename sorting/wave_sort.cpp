#include<iostream>

using namespace std;

void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void wave_sort(int arr[],int n)
{
    int i=1;
    while(i<n)
    {
        if(arr[i]>arr[i-1])
        {
            swap(arr,i,i-1);
        }

        if(arr[i+1]<arr[i] && i<n-1)
        {
            swap(arr,i,i+1);
        }
        i+=2;
    }
}

int main()
{
    int arr[] = {1,3,4,7,5,6,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    wave_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}