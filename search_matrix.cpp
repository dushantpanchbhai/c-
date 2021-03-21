#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int find;
    cin>>find;

    bool found=false;
    int c=m-1,r=0;
    while(r<n && c>0)
    {
        if(arr[r][c]==find)
        {
            found = true;
            break;
        }
        if(arr[r][c] < find)
        {
            r++;
        }
        else if(arr[r][c]>find)
        {
            c--;
        }
    }

    if(found==true)
    {
        cout<<"element found"<<endl;
    }
    else
    {
        cout<<"element not found"<<endl;
    }
    return 0;
}