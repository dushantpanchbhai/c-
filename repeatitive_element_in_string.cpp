#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s = "aslkfjiasnffffffffjksafn";

    int arr[26];
    
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }

    for(int i=0;i<s.size();i++)
    {
        arr[s[i] - 'a']++;
    }

    char ans='a';
    int max=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
            ans=i+'a';
        }
    }

    cout<<ans<<endl;

    return 0;
}