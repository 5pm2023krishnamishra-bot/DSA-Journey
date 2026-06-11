#include <iostream>
using namespace std;

int main(){
    int size;
    int max=INT_MIN;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "enter the "<< i << "th term of array : ";
        cin >> arr[i];
    }
    for(int start =0;start<size;start++){
        for( int end=start;end<size;end++){
            int sum=0;
            for(int i= start;i<=end;i++){
               sum=sum+arr[i];
              
            }
            if(sum>max){
                max=sum;
               }
        }
    }
    cout << "max sum= "<< max;
    return 0;
}