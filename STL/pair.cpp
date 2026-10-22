#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair <int,int> p={2,4};
    cout << p.first << endl;
    cout << p.second << endl;
    // pair can have two diffrent datatypes as well.
    pair <string , int> p2={"name",1};
    cout << p2.first << endl;
    cout << p2.second << endl;
    pair <char,int> p3={107,'k'};
    cout << p3.first << endl;
    cout << p3.second << endl;
    pair <int,pair<int,int>> p4={1,{1,2}};
    cout << p4.first << endl;
    cout << p4.second.first << endl;
    cout << p4.second.second << endl;
    // We can also create vector of pairs
    vector <pair<int,int>> vec={{1,2},{2,3},{3,4}};
    for (int i=0;i<vec.size();i++){
        cout << vec[i].first << "," << vec[i].second << endl;
    }
    vec.push_back({4,5}); // insert
    vec.emplace_back(4,5);//create in-place objects
    for (int i=0;i<vec.size();i++){
        cout << vec[i].first << "," << vec[i].second << endl;
    }
}

