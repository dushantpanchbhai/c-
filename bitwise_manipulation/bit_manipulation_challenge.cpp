#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool power_of_2(int n)
{
    return n && !(n & n-1);
}

int no_of_ones(int n)
{
    int ones=0;
    while(n!=0)
    {
        n= n & (n-1);
        ones++;
    }
    return ones;
}

void subset(int arr[],int n)
{
    for(int i=0;i< (1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if( i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    cout<<power_of_2(16)<<endl;

    cout<<no_of_ones(9)<<endl;  //1001

    int arr[5]= {1,2,3,6,5};
    subset(arr,5);

    return 0;
}