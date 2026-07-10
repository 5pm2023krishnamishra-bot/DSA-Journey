#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector <int> arr(size,1);
    for(int i=0;i<size;i++){
        cout << "enter "<< i+1<< "th element of array : ";
        cin >> arr[i];
    }
    for(int i=1;i<size;i++){
        int curr=i;
        for(int j=i-1;j>=0;j--){
            int prev=j;
            if(arr[prev]>arr[curr]){
                swap(arr[curr],arr[prev]);
                curr=prev;
            }
        }

    }
    cout << "sorted array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}