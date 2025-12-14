#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    vector<int>v;
    int ele;
    for(int i=0;i<4;i++){
        cout<<"enter an element to add to this vector: ";
        cin>>ele;

        v.push_back(ele);
    }
    display(v);
    return 0;
}
