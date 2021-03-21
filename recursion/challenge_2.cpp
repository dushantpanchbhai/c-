#include<iostream>
#include<string>
using namespace std;

void check(string i)
{
    if (i.length()==0 )
    {
        return;
    }

    if (i[0]=='p' && i[1]=='i')
    {
        cout<<"3.14";
        check(i.substr(2));
    }
    else
    {
        cout<<i[0];
        check(i.substr(1));
    }
}

int main()
{
    string a= "pidsafpiafd";
    check(a);
    return 0;
}