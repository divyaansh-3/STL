#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
        s.insert(3);
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    for(auto p:s){
        cout<<p<<" ";

    }
    cout<<endl;
    cout<<"lower bound"<<*(s.lower_bound(8))<<endl;
    cout<<"upper_bound"<<*(s.upper_bound(7));

}