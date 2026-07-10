#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector <int> arr(size,1);
    for(int i=0;i<size;i++){
        cout << "enter " << i+1 << "th term : ";
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "sorted array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}