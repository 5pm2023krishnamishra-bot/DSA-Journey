#include <iostream>
using namespace std;

void changeA(int a){
    a=25;
}
// Pass by refrence using pointer.
 void changea(int* ptr){
        *ptr=25;
}
// Pass by refrence using alias.
void changex(int &b){
    b=200;
}
int main(){
    int a=10;
    int b=87;
    int* ptr=&a;
    int* ptr3=&b;
    int** Ptr=&ptr;
    float price=42.45;
    float* ptr2=&price;
    // Pointer and Pointer to pointer .
    cout << ptr<<" "<< ptr2 << " " << &ptr << "  "<< Ptr << " " << &a<<" "<<&price << endl;
    // Derfefrence operator.
    cout << *(&a)<< endl;
    cout << *ptr<<endl;
    // NULL POINTER.
    int* PTR=NULL;
    cout << PTR<< endl;
    // Pass by value
    changeA(a);
    cout << "inside main a="<< a << endl;
    // Pass by refrence using pointers.
    changea(&a);
    cout << "a="<<a<<endl;
    // Pass by refrence using alias.
    changex(a);
    cout <<"a="<<a<<endl;
    // Array pointer.
    int arr[]={100,200,300,400,500};
    cout << arr << endl;
    cout << *arr<<endl;
    // Pointers arithmetic.
    cout<<  "a="<<a<<endl<<"ptr="<<ptr<<endl;
    ptr++;
     cout<<  "a="<<a<<endl<<"ptr="<<ptr<<endl;
    // only ptr changed by +4(+1 datatype)
     a++;
      cout<<  "a="<<a<<endl<<"ptr="<<ptr<<endl;
    // only  a will change by +1.
    // works simmilarly for  decrement(ptr--).
    ptr=ptr+1;
    cout<<"ptr="<<ptr<<endl;
    // if pointers are added or substracted by x then they"ll change by x datatype.
    // it can be used in array.
    cout << *arr<<endl<< *(arr+1)<< endl;
    // Pointers can be substracted  by each other if the datatype is same , however they can never be added .
    cout << ptr<<" "<<ptr2<<" "<<ptr-ptr3<<endl;
    // substraction of pointers represents number of blocks of data types  between two pointers.and they can also be compared.
    return 0;
}