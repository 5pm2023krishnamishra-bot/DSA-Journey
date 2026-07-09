#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void initialise(vector <int> &arr,int &end){
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    end=largest-smallest;
}

int main(){
    int N,C;
    cin >> N >> C ;
    vector <int> arr(N,1);
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int start=1;
    int end=0;
    int ans=-1;
    initialise(arr, end);
    while(start<=end){
        int mid=start+(end-start)/2;
        int cow=1;
        int ref=0;
        bool possible=true;
        for(int i=1;i<N;i++){
            if((arr[i]-arr[ref])>=mid){
                cow++;
                ref=i;
            }
        }
        if(cow<C){
            possible = false;
        }
        if(possible){
            ans=mid;
           start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout << ans;
    return 0;
}