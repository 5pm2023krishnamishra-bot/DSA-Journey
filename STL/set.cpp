#include <iostream>
#include <set>
using namespace std;

//  time comp of count , erase , find , size , empty = O(logn)

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto val:s){
        cout << val << " ";
    }
    cout <<"size=" << s.size() << endl;

    // valus can't be duplicated

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto val:s){
        cout << val << " ";
    }
    cout <<"size="<<s.size()<< endl;

    s.insert(7);

    cout << "lower bound = " << *s.lower_bound(6)<< endl;// it returns the given or just closest value greater than the given value
    cout << "lower bound = "<< *s.lower_bound(8)<< endl;//returns s.end() iterator if >= given value doesn't exist.

    // simmilarly upperbound works - returned value must be greater than key(given value).
    // similarly there are multi-set and unordered set like maps
    return(0);
}