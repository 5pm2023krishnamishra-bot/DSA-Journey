#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

// insert , erase , count time comp = O(1).

int main(){
    unordered_map <string,int> m;
    m.emplace("tv",100);
    m.emplace("tv",100);
    // no duplicates can be entered in a unordered map

    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }

    // it saves values in random order.
}