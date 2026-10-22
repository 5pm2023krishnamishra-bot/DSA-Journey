#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s="abc";
    next_permutation(s.begin(),s.end());
    cout << s<<endl;
    string k="krishna";
    prev_permutation(k.begin(),k.end());
    cout << k<<endl;
    return (0);
}