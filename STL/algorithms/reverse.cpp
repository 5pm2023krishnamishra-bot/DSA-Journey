#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int>vec{3,4,2,5,1};
    reverse(vec.begin(),vec.end());
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;
    // it can also work for a range
    vector<int>v2={1,2,3,4,5,6,7};
    reverse(v2.begin()+1,v2.end()-1);
    for(int val:v2){
        cout << val << " ";
    }
    cout << endl;
    return (0);
}