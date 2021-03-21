#include<iostream>

using namespace std;

void countSort(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }

    int count[10]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }

    int output[n]={0};
    for(int i=0;i<n;i++){
        output[--count[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<endl;

}

int main()
{
    int n=10;
    int arr[10] = {1,8,9,6,5,4,5,9,8,1};
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<endl;
    countSort(arr,n);
    return 0;
}