#include <iostream>
#include <queue>
using namespace std;

// A priority queue stores the data in order (greatest on top , lowest on bottom)

int main(){
    priority_queue <int> q;
    q.push(4);//O(logn)
    q.push(3);
    q.push(10);
    q.push(5);
    while(!q.empty()){
        cout << "top = "<<q.top()<<" & size = "<<q.size()<< endl;//top = O(1)
        q.pop();//pop=O(logn)
    }
    // We can also build a revrse order priority queue 
    priority_queue <int,vector <int>,greater<int>> q2;
    q2.push(4);
    q2.push(3);
    q2.push(10);
    q2.push(5);
    while(!q2.empty()){
        cout << "top = "<<q2.top()<<" & size = "<<q2.size()<< endl;
        q2.pop();
    }
}