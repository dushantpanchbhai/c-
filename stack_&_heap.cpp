#include<iostream>

using namespace std;

int main()
{
    int a=10; //store in stack

    int *p= new int(); //allocate memory in heap
    *p=10;

    delete(p);  //deallocate memory

    p= new int[4];  //allocate array memory in heap

    delete[]p; //deallocate array memory in heap

    p=NULL; //stop pointing towards heap

    return 0;
}