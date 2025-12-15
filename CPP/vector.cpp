#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int>v;
    vector<int>v1(3,10);
    int ele;
    for(int i=0;i<4;i++){
        cout<<"enter an element to add to this vector: ";
        cin>>ele;

        v.push_back(ele);
    }
    v.erase(v.begin());
    v.erase(v.begin()+1);
    v1.erase(v1.begin(),v1.begin()+2);
    v1.insert(v1.begin(),20);
    v.insert(v.begin()+2,50);
    v1.insert(v1.end()-1,40);
    display(v);
    display(v1);
    cout<<v.capacity()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<*(v.begin())<<endl;
    cout<<*(v1.begin())<<endl;
    cout<<*(v.end())<<endl;
    cout<<*(v1.end())<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";

    }
    cout<<endl;
    for(auto at=v1.rbegin();at!=v1.rend();at++){
        cout<<*(at)<<" ";
    }
    vector<pair<int,int>>vec2={{1,2},{2,3},{4,5},{6,7}};
    vec2.push_back({4,6});
    vec2.emplace_back(4,8);
    cout<<endl;
    for(auto i: vec2){
        cout<<i.first<<" " << i.second<<" ";
        cout<<endl;

    }

    return 0;
}
