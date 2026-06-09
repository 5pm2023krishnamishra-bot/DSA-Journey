#include <iostream>
using namespace std;

int max(int arr[],int size){
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int min(int arr[],int size){
    int smallest=INT_MAX;
    for (int i=0;i<size;i++){
        if (smallest>arr[i]){
            smallest=arr[i];
        }
    }
    return smallest;
}

int main(){
    int size;
    cout << "enter the number of entries : ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "enter the " << i << "th entry : ";
        cin >> arr[i];
    }
    cout << "max = "<< max(arr,size) << endl << "min = "<< min(arr,size) << endl;
    return 0;
}