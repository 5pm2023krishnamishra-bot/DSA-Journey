#include <iostream>
#include <map>
using namespace std; 

// time comp of insert,erase,count = O(logn)

string find(map<string,int> m,string obj){
    if(m.find(obj)!=m.end()){//m.find() retuns iterator if found the key and returns m.end() if key not found
        return "found";
    }
    else{return "not found";}

}

int main(){
    map <string,int> m;
    m["tv"]=100;
    m["laptop"]=100;
    m["Headphones"]=50;
    m["tablet"]=120;
    m["watch"]=50;

    for(auto p:m){
        cout << p.first << " " << p.second << endl;//it gives output in accesending order of keys
    }
    cout << "laptop val = "<< m["laptop"]<< endl;
    cout << "laptop count = "<< m.count("laptop")<<endl; 
    m.erase("tv");
    for(auto p:m){
        cout << p.first << " " << p.second << endl;//it gives output in accesending order of keys
    }
    cout << find(m,"laptop")<< endl;
    cout << find(m,"tv")<<endl;
    return 0;
}