#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>q;    //for reverse order priority queue
    priority_queue<int>q1;            //for max order priority queue
    q.push(10);
    q.push(2);
    q.push(4);
    q.push(50);
        q1.push(50);
    q1.push(40);
    q1.push(90);
    q1.push(20);

    
    while(!q.empty()){
     cout<<q.top()<<" ";
     q.pop();   
    }
    while(!q1.empty()){
     cout<<q1.top()<<" ";
     q1.pop();   
    }
}