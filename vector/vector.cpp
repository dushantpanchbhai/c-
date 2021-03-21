#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    cout<<"using auto function"<<endl;
    for(auto element:v){
        cout<<element<<endl;
    }

    vector<int>v2 (3,59);
    //59 59 59  (size,element)

    //swapping v and v2:
    swap(v,v2);
    cout<<"v after swapping: "<<endl;
    for(auto element:v){
        cout<<element<<endl;
    }
    cout<<"v2 after swapping : "<<endl;
    for(auto element:v2){
        cout<<element<<endl;
    }

    //sort
    sort(v.begin(),v.end());
    return 0;
}