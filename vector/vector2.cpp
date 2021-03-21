#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycompare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}
int main()
{
    int arr[] = {10,2,24,45,5,9,8};
    vector < pair<int,int> > v;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(),v.end(),mycompare);
    
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }

    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}