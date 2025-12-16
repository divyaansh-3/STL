#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=100;
    m["headphone"]=30;
    m["display"]=60;
    m["tablet"]=50;
    m["watch"]=90;
    m.insert({"laptop",70});
    m.emplace("cpu",68);
    for(auto p:m){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    m["laptop"]=9;
    for(auto p:m){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    if(m.find("tv")!=m.end()){
        cout<<endl<<"found";

    }
    else{
        cout<<endl<<"not found";

    }
    cout<<endl<<"quantity of laptop is: "<<m["laptop"];
}