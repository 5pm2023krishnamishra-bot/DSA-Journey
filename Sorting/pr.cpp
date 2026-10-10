#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector <int> arr(size,1);
    for(int i=0;i<size;i++){
        cout << "enter the " << i+1 << "th term";
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        int smallest=arr[i];
        int x=i;
        for(int j=i;j<size;j++){
            if(arr[j]<smallest){
                smallest=arr[j];
                x=j;
            }
        }
        swap(arr[i],arr[x]);
    }
    for (int i=0; i<size;i++){
        cout << arr[i];
}
    return 0;
}