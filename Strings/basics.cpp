#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    string str="hello world";//dynamic=> resize in runtime unlike character array.
    cout << str << endl;
    str="Krishna";
    cout << str << endl;
    // strings are contigous
    string str2="Mishra";
    string str3=str+" "+str2;//concatination
    cout << str3 << endl;
    string str4="Krishna Mishra";
    cout << (str3==str4)<< endl;
    // strings can get input from both cin and getline , getline is better becoz it also takes spaces unlike cin
    string str5;
    getline(cin,str5);
    cout << str5 << endl;
    cin >> str5 ;
    cout << str5 << endl;
    // we can also run loops on string.
    for (int i=0;i<str.length();i++){
        cout << str[i] << endl;
    }
    // we can find sub string in a string 
    cout << str.find("hna"); // returns position of first occurence of substring.
    //we can also erase a substring or character <str.erase(begin,end)>
    str.erase(str.begin()+1,str.begin()+4);
    cout << str << endl;
}