#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout << "enter the string :";
    getline(cin,str);
    string str2=str;
    reverse(str.begin(),str.end());
    if(str==str2){
        cout << "pallindrome";
    }
    else{
        cout << "not a pallindrome";
    }
    return (0);
}