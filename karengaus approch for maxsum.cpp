#include<iostream>
using namespace std;
//karengaus approch
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int maxsum=INT8_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum=currentsum + arr[i];
        if (currentsum<0){
            currentsum=0;
        }

        maxsum=max(maxsum,currentsum);
    }

    cout<<maxsum;
    return 0;
}