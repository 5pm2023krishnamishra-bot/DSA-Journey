#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter the number of elements : ";
    cin >> size;
    vector <int> nums;
    for (int i=0;i<size;i++){
        int entry;
        cout << "enter the"<< i << "th element : ";
        cin >> entry;
        nums.push_back(entry);
    }
    // Moore's voting algorithm (solved majority element problem assuming majority element always exists .)
    int freq=0;
         int ans =0;
         for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
         }
         cout << "majority element = " << ans;
     
    return 0;
}