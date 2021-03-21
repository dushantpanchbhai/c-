#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool status = true;
    for(int i=0;i<n;i++)
    {
        if( arr[i] != arr[n-i-1] )
        {
            status =false;
            break;
        }
    }

    if(status == true)
    {
        cout<<"word is a palindrome"<<endl;
    }
    else{
        cout<<"word is not a palindrome"<<endl;
    }
    
    return 0;
}