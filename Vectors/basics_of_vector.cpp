#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
        cout << "size = "<< vec.size() << endl;
        for(int val : vec){
            cout << val << endl;
        }
        vec.push_back(7);
         cout << "size = "<< vec.size() << endl << "capacity = "<< vec.capacity() << endl;
        for(int val : vec){
            cout << val << endl;
        }
        vec.pop_back();
         cout << "size = "<< vec.size() << endl;
        for(int val : vec){
            cout << val << endl;
        }
        cout << vec.front() << endl << vec.back() << endl << vec.at(1) ;
    return 0;
}