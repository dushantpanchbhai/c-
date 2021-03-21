#include<iostream>
#include<string>
using namespace std;

string moveToEndX(string a)
{
    if (a.length()==0)
    {
        return "";
    }

    char ch =a[0];
    string ans = moveToEndX(a.substr(1));

    if(ch == 'x')
    {
        return ans + ch;
    }
    else{
        return ch + ans;
    } 
}

int main()
{
    string a = "asdxxxwesxsdfx";
    cout<<moveToEndX(a)<<endl;
    return 0;
}