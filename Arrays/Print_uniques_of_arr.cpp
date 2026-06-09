#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "enter the number of entries : ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "enter the " << i << "th entry : ";
        cin >> arr[i];
    }
   for(int i=0;i<size;i++){
    int m=0;
    int duplicate=0;
    while (m<size){
        if(arr[i]==arr[m] && i!=m){
            duplicate++;
            break;
        }
        else{
            m++;
        }
        
    }
    if( duplicate==0){
            cout << arr[i] << " ";
        }
   }
   cout << endl;
   return 0;
}