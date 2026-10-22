#include <iostream>
#include <queue>
using namespace std;

// it is a first in first out data structure 
// time complexities :- push,emplace,front,pop=(1)


int main(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout << "front = "<< q.front()<<" &size = "<<q.size()<<"\n";
        q.pop();
    } 
    cout << q.size()<< endl;
    queue <int> q2;
    q2.push(1);
    q2.push(2);
    q2.swap(q);
    while(!q.empty()){
        cout << "front = "<< q.front()<<" &size = "<<q.size()<<"\n";
        q.pop();
    }
}