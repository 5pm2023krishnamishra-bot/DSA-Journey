#include <iostream>
using namespace std;

// Kadane's Algorithm

int main(){
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "enter the " << i << "th term of array : ";
        cin >> arr[i];
    }
    int curr_sum=0;
    int Max_sum=INT_MIN;
    for(int i=0;i<size;i++){
        curr_sum=curr_sum+arr[i];
        if(curr_sum>Max_sum){
            Max_sum=curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout << Max_sum;
    return 0;
}