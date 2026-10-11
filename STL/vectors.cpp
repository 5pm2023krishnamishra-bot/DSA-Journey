#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;

    vec.push_back(1);//time complexity = O(1)
    vec.push_back(2); // when we push back a vector it's size get doubled and the entry is added after copying older entries
    vec.push_back(3);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    cout << "vector at idx 2 = "<< vec[2] << "or" << vec.at(2) << endl; // gives same output.

    vec.pop_back(); // removes the element at last index . so therefore,cout<<vec[2]; shows error
                   //time complexity of push_back()=O(1)

    vector <int> vec2={1,2}; // declaration of vector.
    vector <int> vec3(3,10); // it creates vector of capacity=3 and all the elements=10.
    for(int i=0;i<vec2.size();i++){
        cout << vec2[i] << endl;
    } 
    for(int i=0;i<vec3.size();i++){
        cout << vec3[i]<<endl;
    } 
 
    // Erase (time complexity = O(N))
    vec.erase(vec.begin());
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << endl;
    }
    vector <int> vec4={1,2,3,4,5};
    vec4.erase(vec4.begin()+2);
    for(int i=0;i<vec4.size();i++){
        cout << vec4[i] << endl;
    }
    // it can erase a range also.
    vec4.erase(vec4.begin(),vec4.begin()+3);
    for(int i=0;i<vec4.size();i++){
        cout << vec4[i] << endl;
    }
    // INSERT (time comp = O(N)) <v.insert(posn,value)>
    vec4.insert(vec4.begin(),4);
    for(int i=0;i<vec4.size();i++){
        cout << vec4[i] << endl;
    } 
    // ITERATORS
    // <vec.begin()> points to 0th index
    // <vec.end()> points to next of the last index.
    cout <<  *vec4.begin()<< endl << *(vec4.end()-1) << endl;
    // reverse_begin and reverse_end.
    vector <int> vec5={1,2,3,4,5};
    for(vector <int>::iterator it=vec5.begin();it!=vec5.end();it++){
        cout << *it << endl;
    }
    for(vector <int>::reverse_iterator it =vec5.rbegin();it!=vec5.rend();it++){
        cout << *it<<endl;
    }
    // In modern C++ <auto> can be used instead of "vector <int>::iterator" .
}