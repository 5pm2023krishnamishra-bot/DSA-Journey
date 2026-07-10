#include <iostream>
#include <vector>
using namespace std;

    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                    high--;
            }
        }
    }

    int main(){
        int size;
        cout << "enter the size of array : ";
        cin >> size;
        vector <int> nums(size,1);
        for(int i=0;i<size;i++){
            cout << "enter the "<<i+1<<"th element : ";
            cin >> nums[i];
        }
        sortColors(nums);
        cout << "sorted array : ";
        for(int i=0;i<size;i++){
            cout << nums[i]<<" ";
        }
        return 0;
    }
