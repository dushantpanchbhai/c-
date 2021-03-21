#include<iostream>

using namespace std;

int getBit(int n,int a)
{
    return ((n & (1<<a))!=0);
    // first 1<<a makes the number 0100
    //then 0100 is multiplied by n throug '&' operater
    //then we got 0 or 1
}

int setBit(int n,int a)
{
    return((n | (1<<a)));
}

int clearBit(int n,int a)
{
    return ((n & ~(1<<a)));
}

int updateBit(int n,int pos,int value)
{
    int mask = ~(1<<pos);
    int ans1 = n & mask;
    int mask2 = (value<<pos);
    int ans2 = n | mask2;
    return ans2;
}

int main()
{
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,2)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;

    return 0;
} 