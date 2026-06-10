#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1,2,2,3,4,5,3,4,5};
    int size=nums.size();
    int single = nums.front();
    for(int i=1;i<size;i++){
        single=single^nums.at(i);
    }
    cout << "single = : "<< single << endl;
    return 0; 
}