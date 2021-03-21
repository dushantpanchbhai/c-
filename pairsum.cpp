#include<iostream>
using namespace std;
bool pairsum(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;

    while(low<high){
        if (arr[high] + arr[low] == k)
        {
            cout<<"index are "<<high<<" "<<low;
            return true;
        }
        else if (arr[high]+arr[low] < k)
        {
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    if(pairsum(arr,n,k)){
        cout<<"sum exist"<<endl;
    }else{
        cout<<"sum does not exist"<<endl;
    }

    return 0;
}