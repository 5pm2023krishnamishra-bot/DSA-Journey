#include <iostream>
#include <stack>
using namespace std;
// A stack can only be aaccessed by top , it is a last in first out data structure
// time complexities :- push,emplace,top,pop=(1)

int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "top = "<< s.top() << " & size = "<< s.size() << endl;
    s.pop();
    cout << "top = "<< s.top() << " & size = "<< s.size() << endl;
    //  empty checks whether the stack is empty or not.
    while(!s.empty()){
        cout << "top = "<< s.top();
        s.pop();
    }
    cout << s.size();
    stack <int> s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
     
    // swap swaps two stacks 
    s.swap(s2);
    cout << "top = "<< s.top() << " & size = "<< s.size() << endl;
    cout <<s2.size() << endl;
}
