#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// <binary_search(v.begin(),v.end(),target)>

int main(){
    vector <int>v={1,2,3,4,5};
    cout << binary_search(v.begin(),v.end(),3);
    return (0);
}