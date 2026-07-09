#include <iostream>
#include <vector>
using namespace std;

 int bin_search(int target , int arr[] , int size){
    // initialising start and end.
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        // If we do mid=(start+mid)/2; then in worst case start=INT_MAX and end will also be end=INT_MAX so start+end will overflow the limit .so for optimisation mid=start+(end-start)/2. 
        if(arr[mid]==target){
            return mid;
        }
        if(target>arr[mid]){
          start=1+mid; 
        }
        if(target<arr[mid]){
          end=mid-1;
        }
    }
    return -1;
}

int main(){
    int size;
    cout << "enter the size"<<endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "enter the"<< i << "th element"<< endl;
        cin >> arr[i];
    }
    int target;
    cout << "enter the terget to search"<< endl;
    cin >> target;
    int ans=bin_search(target,arr,size);
    cout << ans;
    return 0;
}

