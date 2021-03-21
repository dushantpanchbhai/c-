#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();

    int ans=0,length=0;
    int i=0;
    while(true){
        if( arr[i]==' ' || arr[i] == '\0')
        {
            ans=max(ans,length);
            length=0;
        }
        else{
            length++;
        }

        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }

    cout<<ans<<endl;

    return 0;
}