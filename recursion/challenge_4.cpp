#include<iostream>
#include<string>
using namespace std;

string duplicate(string a)
{
    if (a.length()==0)
    {
        return "";
    }

    char ch = a[0];
    string ans = duplicate(a.substr(1));

    if(ch == ans[0])
    {
       return ans;  
    }
    else{
        return ch + ans;
    }

}
int main()
{
    string s = "saaafffsss";
    cout<<duplicate(s)<<endl;
    return 0;
}