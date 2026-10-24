#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[]={'K','r','s','h','n','a','\0'};//character array
    char str2[]="Gauri";//string literal
    char str3[100];
    char str4[100];
    cout << str << endl;//returns the string
    cout << "size = " << strlen(str) << endl;//returns size of string.
    cout << "size of second string : "<< strlen(str2) << endl;
    // string's individual characters can also be accesed like a normal array.
    cout << str[2] << str2[2] << endl;
    cin >> str3;//to take input of string,but it doesn't include spaces.
    cout << str3 << endl;
    // Therefore we use getline(str,len,delim?) to input string
    cin.getline(str4,100,'@');//delimitor replaces limitor from \n to any other chosen character.
    cout << str4 << endl;
} 