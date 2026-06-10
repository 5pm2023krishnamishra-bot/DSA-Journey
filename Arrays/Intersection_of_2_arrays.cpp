#include <iostream>
using namespace std;

int main(){
    int size1;
    int size2;
    cout << "enter the number of entries in both array respectively : ";
    cin >> size1 >> size2;
    int arr1[size1];
    int arr2[size2];
    for(int i=0;i<size1;i++){
        cout << "enter the " << i << "th entry of 1st array : ";
        cin >> arr1[i];
    }
    for(int i=0;i<size2;i++){
        cout << "enter the " << i << "th entry of 2nd array : ";
        cin >> arr2[i];
    }
    for(int i=0;i<size1;i++){
        for(int m=0;m<size2;m++){
            if(arr1[i]==arr2[m]){
                cout << arr1[i] << " ";
               for(int k=m;k<size2-1;k++){
                arr2[k]=arr2[k+1];
               }
               size2--;
               break;
            }
        }
    }
    cout << endl;
    return 0;
}