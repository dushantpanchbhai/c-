#include<iostream>
using namespace std;

int kidenssum(int arr[],int n)
{
    int maxsum=INT8_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(sum,maxsum);
    }

    return maxsum;
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

    int wrapsum;
    int nonwrapsum = kidenssum(arr,n);

    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-1*arr[i];
    }

    wrapsum=totalsum + kidenssum(arr,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;
    
    return 0;

}