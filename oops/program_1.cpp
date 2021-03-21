#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;

    //default constructor
    student(){
        cout<<"this is default constructor"<<endl;
    }

    //parameter constructor
    student(string s)
    {
        name = s;
    }

    //copy constructor
    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void getName()
    {
        cout<<name<<endl;
    }

    void Info()
    {
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
    }

    
    bool operator == (student &a)
    {
        if (name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // student arr[3];
    // for(int i=0; i<3; i++)
    // {
    //     cin>>arr[i].name;
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }

    // for(int i=0; i<3; i++)
    // {
    //     arr[i].Info();
    // }

    student s("dushant");
    s.getName();

    student a = s;
    a.getName();

    if(a==s){
        cout<<"parameters are same"<<endl;
    }
    else{
        cout<<"parameters are not same"<<endl;
    }

    return 0;
}