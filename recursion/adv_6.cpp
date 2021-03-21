#include<iostream>
using namespace std;

int knapscak(int value[], int weight[],int n, int W){

    if (W<0) {
        return 0;
    }
    if( weight[n-1] > W ){
        return knapscak(value,weight,n-1,W);
    }
    
    return max(knapscak(value,weight,n-1,W-weight[n-1])+value[n-1],knapscak(value,weight,n-1,W));
}

int main()
{
    int value[] = {10,20,30};
    int weight[] = {100,50,150};
    int W=50;
    cout<<knapscak(value,weight,3,W)<<endl;
    return 0;
}