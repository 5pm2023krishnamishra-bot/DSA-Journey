#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    vector <int> arr(size,1);
    for(int i=0;i<size;i++){
        cout << "enter " << i+1 << "th element : ";
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        int smallest=INT_MAX;
        int x;
        for(int j=i;j<size;j++){
            if(arr[j]<smallest){
                smallest=arr[j];
                x=j;
            }
        }
        swap(arr[i],arr[x]);
    }
    cout << "sorted array : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}