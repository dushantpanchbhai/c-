#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> b;
    b.push_back(1);
    b.push_back(2);

    vector<int>:: iterator it;
    for(it = b.begin();it!=b.end();it++){
        cout<<*it<<endl;
    }

    for(auto element:b){
        cout<<element<<endl;
    }

    vector<int>c (2,3);

    swap(b,c);
    cout<<"printing b "<<endl;
    for(auto element:b){
        cout<<element<<endl;
    }

    cout<<"printing c"<<endl;
    for(auto element:c){
        cout<<element<<endl;
    }

    sort(b.begin(),b.end());
   //vector<vector<int>> grid(2,vector<int>(3,-1));
   return 0;
}