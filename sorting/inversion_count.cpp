#include<bits/stdc++.h>
using namespace std;

long long merge(int arr[],int l,int mid,int r)
{
    long long inv = 0;
    int n1 = mid -l + 1;
    int n2 = r - (mid+1) + 1;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]= arr[l+i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i] = a[mid+i+1];
    }

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<=b[i])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        {
            arr[k]=b[j];
            inv+=n1 - i;
            k++;j++;
        }
    }

    while(i<n1){
        arr[k]= a[i];
        k++;i++;
    }

    while(j<n2)
    {
        arr[k] = b[j];
        k++;j++;
    }

    return inv;
}

long long mergeSort(int arr[],int l,int r)
{
    int inv = 0;
    if(l<r)
    {
        int n = (r+l)/2;
        inv += mergeSort(arr,l,n);
        inv += mergeSort(arr,n+1,r);
        inv += merge(arr,l,n,r);
    }

    return inv;
}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<mergeSort(arr,0,n-1)<<endl;
    return 0;
}