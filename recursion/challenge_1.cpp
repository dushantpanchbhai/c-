#include<iostream>
#include<string>
using namespace std;

void reverse(string a)
{
    if(a.length()==0){
        return;
    }

    string rest = a.substr(1);
    reverse(rest);
    cout<<a<<endl;
}

int main()
{
    reverse("binod");
    return 0;
}