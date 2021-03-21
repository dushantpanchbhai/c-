#include<iostream>
#include<string>
#include<algorithm> //for upper and lower case conversion

using namespace std;

int main()
{
    string str = "thlanfakFASDdnf";
    // since a - A = 32
    // to subract 32 form the string to convert into upper case
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }

    cout<<str<<endl;
    
    //add 32 to convert into lower case
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }
    }

    cout<<"lower case "<<str<<endl;


    //METHOD 2 (using the transform function)
    string s = "dushant";
    
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}