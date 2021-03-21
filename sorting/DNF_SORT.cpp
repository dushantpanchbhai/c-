#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void dnf_sort(int arr[],int n,int low,int mid,int high)
{
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr,mid,high);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1,2,0,2,2,1,0,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    dnf_sort(arr,n,0,0,n-1);

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }    

    return 0;
}