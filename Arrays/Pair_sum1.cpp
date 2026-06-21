#include <iostream>
#include <vector>
using namespace std;

// Brute force method

int main(){
    int size;
    cout << "enter the number of elements : ";
    cin >> size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout << "enter the " << i << "th term : ";
        cin >> arr[i];
    }
    int target;
    cout << "enter the target sum";
    cin >> target;
    vector <int> ans;
    int sym=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target && i!=j){
                ans.push_back(i);
                ans.push_back(j);
                sym++;
                break;
            }
        }
        if(sym==1){
            cout << "( ";
            for (int k=0;k<2;k++){
                cout << ans[k] << " ,";
            }
            cout << " )";
            break;
        }
    }
}