#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second==p2.second){
        if(p1.first<=p2.first)return true;
        else return false;
    }
    else return false;
}

int main(){
    int arr[6] = {3,5,1,8,4,2};
    vector <int> vec={2,4,3,5,1};
    sort(arr,arr+6);
    sort(vec.begin(),vec.end());
    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    sort(arr,arr+6,greater<int>());// for sorting in reverse order.
    sort(vec.begin(),vec.end(),greater<int>());
    for(int val:arr){
        cout << val << " ";
    }
    cout << endl;
    for(int val:vec){
        cout<< val<<" ";
    }
    cout << endl;

    vector<pair<int,int>> v={{1,2},{3,4},{5,7},{1,3},{2,3}};
    sort(v.begin(),v.end());
    for(auto p:v){
        cout << "(" << p.first << p.second << ") ";
    }
    cout << endl; 
    
    sort(v.begin(),v.end(),comparator);
    for(auto p:v){
        cout << "(" << p.first << p.second << ") ";
    }
    cout << endl; 
     return (0);
}