//tower of hanoi

#include<iostream>
using namespace std;

void towerofHanoi(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }

    towerofHanoi(n-1,src,helper,dest);
    cout<<"moving form "<<src<<"to"<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}

int main()
{
    towerofHanoi(5,'A','B','C');
    return 0;
}