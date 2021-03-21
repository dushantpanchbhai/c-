#include<iostream>

using namespace std;
//function overloding :
// class apnacollege
// {
//     public:
//     void fun()
//     {
//         cout<<"i am in fun function"<<endl;
//     }

//     void fun(int x)
//     {
//         cout<<"i am in fun function with x as variable"<<endl;
//     }

//     void fun(double x)
//     {
//         cout<<"in fun function with double argument"<<endl;
//     }

// };

//operator overloding:
// class Complex
// {
//     private:
//     int rel,img;
//     public:

//     Complex(int r=0,int i=0)
//     {
//         rel = r;
//         img = i;
//     }

//     Complex operator + (Complex const &obj)
//     {
//         Complex res;
//         res.img = img + obj.img;
//         res.rel = rel + obj.rel;
//         return res;
//     }

//     void display()
//     {
//         cout<<rel<<" + i"<<img<<endl;
//     }
// };

class base
{
    public:
    virtual void print()
    {
        cout<<"this is the base classes print function"<<endl;
    }

    void display()
    {
        cout<<"this is the base classes display function"<<endl;
    }
};

class derived: public base
{
    public:
    void print()
    {
        cout<<"this is the derived classes print function"<<endl;
    }

    void display()
    {
        cout<<"this is the derived classes display function"<<endl;
    }

};

int main()
{
    // Complex c1(2,3),c2(3,5);
    // Complex c3 = c1 + c2;
    // c3.display();

    base *baseptr;
    derived b;
    baseptr = &b;

    baseptr -> print();

    baseptr -> display();

    return 0;

}