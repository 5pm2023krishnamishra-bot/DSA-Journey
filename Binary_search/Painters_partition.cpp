#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int sum(vector <int> arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int N;
    cout << "enter the number of boards : ";
    cin >> N;
    vector <int> arr(N,1);
    for(int i=0;i<N;i++){
        cout << "enter the length of " << i+1 << "th board";
        cin >> arr[i];
    }
    int M;
    cout << "enter the number of painter's : ";
    cin >> M;
    int start = arr[0];
for (int i = 1; i < N; i++) {
    start = max(start, arr[i]);
}
    int end=sum(arr,N);
    int ans=INT_MAX;
    while(start<=end){
        int mid=start+(end-start)/2;
        int total_time=0;
        int pnts=1;
        bool possible=true;
        for(int i=0;i<N;i++){
            if(arr[i]>mid){
                possible=false;
                break;
            }
            if(total_time+arr[i]<=mid){
                total_time+=arr[i];
            }
            else{
                pnts++;
                total_time=arr[i];
            }
        }
        
        if(pnts<=M && possible){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if(ans!=INT_MAX){
        cout << ans; 
    }
    else{
        cout << -1;
    }
    return 0;
}