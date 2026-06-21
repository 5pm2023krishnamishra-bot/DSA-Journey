#include <iostream>
#include <vector>
using namespace std;

// 2 Pointers approach.

vector <int> Pairsum(int arr[], int target, int size){
    vector <int> ans;
    int i=0;
    int j=size-i-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        if(arr[i]+arr[j]>target){
            j--;
        }
        if(arr[i]+arr[j]<target){
            i++;
        }
    }
    return ans;
}

int main(){
    int size;
    cout << "enter the number of elements : ";
    cin >> size;
    int arr[size];
    int target;
    cout << "enter the elements in ascending order !!" << endl;
    for(int i=0;i<size;i++){
        cout << "enter the" << i << "th element : ";
        cin >> arr[i];
    }
    cout << "enter the target : ";
    cin >> target;
    vector <int> ans = Pairsum(arr, target, size );
    cout << "( " << ans[0] << ", "<< ans[1]<< ")";
    cout << endl;
    return 0;
}
