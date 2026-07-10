#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter the size of array";
    cin >> size;
    vector <int> arr(size,1);
    for(int i=0;i<size;i++){
        cout << "enter the " << i+1 << "th element : ";
        cin >> arr[i];
    }
    for(int i=1;i<size;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }    
        arr[prev+1]=curr;
    }
    cout << "sorted array : ";
    for(int i=0;i<size;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}