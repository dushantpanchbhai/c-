#include<iostream>

using namespace std;

int NoWays(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    return NoWays(n-1) + NoWays(n-2);
}

int main(){
    cout<<NoWays(4)<<endl;
    return 0;
}