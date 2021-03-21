#include<iostream>
#include<string>

using namespace std;

void seq(string rem,string ans)
{
    if(rem.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=rem[0];
    int code = ch;
    string s = rem.substr(1);
    
    seq(s,ans);
    seq(s,ans + ch);
    seq(s,ans + to_string(code));

}

int main()
{
    seq("AB","");
    return 0; //
}