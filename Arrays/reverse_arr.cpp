#include <iostream>
using namespace std;

void reverse_arr(int arr[],int size){
    int i=0;
    while(i<size/2){
        swap(arr[i],arr[size-1-i]);
        i++;
    }
}
int main(){
    int size;
    int arr[size];
    cout << "enter the number of entries : ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "enter "<< i << "th entry";
        cin >> arr[i];
    }
   reverse_arr(arr,size) ;
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
 }