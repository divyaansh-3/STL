#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
bool comparator(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second)
    return true;
    else if(a.second>b.second){
        return false;
    }
    else{
        if(a.first<b.first){
            return true;
        }
        else{
            return false;
        }
    }

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
    sort(v.begin(),v.end(),greater<int>());   // for sorting in descending order
    for(auto p: v){
        cout<<p<<" ";
    }
    cout<<endl;
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
    vector<pair<int,int>>vec2={{9,2},{2,2},{4,2},{6,2}};
    vec2.push_back({1,2});
    vec2.emplace_back(0,2);
    cout<<endl;
    sort(vec2.begin(),vec2.end());    //this will sort the pair on the basis of the first element of the pair.
    
    
    for(auto i: vec2){
        cout<<i.first<<" " << i.second<<" ";
        cout<<endl;

    }
    //for sorting by comparing the second element first then followed by the first element , we need to create a custom comparator.
    sort(vec2.begin(),vec2.end(),comparator);


    return 0;
}
