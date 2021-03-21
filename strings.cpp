#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
{
    //printing scentence as a string
    string name;
    getline(cin,name);//getline is used when their is a scentence and not the word.
    cout<<name<<endl;

    //appending two strings
    string a="fam";
    string b="ily";

    a.append(b);  //can use a+b instead of append
    cout<<a<<endl;

    //using clear function to clear string
    string abc="alsfnas fnknfsaasfn anfl";
    cout<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;

    //using compare function
    string a1="abc";
    string b1="abc";

    cout<<a1.compare(b1)<<endl;//it gives zero as output when strings are equal
    cout<<endl;

    //emppty function
    //consider a1
    a1.clear();

    if( a1.empty())
    {
        cout<<"string is empty"<<endl;
    }

    //erase function
    string s1 = "dushant";
    s1.erase(2,3);  // delete char ((start index,number of element to delete))
    cout<<s1<<endl;

    //string to integer function
    string k1="2656";
    int x = stoi(k1);
    cout<<x+3<<endl;

    //integer to string
    //using x as our int
    cout<<to_string(x) + "43"<<endl;

    //sorting string
    string o1="dushant";
    sort(o1.begin(),o1.end());  //#alogrith is included to use this function
    cout<<o1<<endl;
    return 0;
}