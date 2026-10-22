#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque <int> d={1,2,3,4,5};
    for(int val : d){
        cout << val << " "; 
    }
    // push_back(),pop_back(),push_front(),pop_front() emplace functions works same as lists
    // deque are dynamic arrays , so can be random accessed unlike lists 
    
}