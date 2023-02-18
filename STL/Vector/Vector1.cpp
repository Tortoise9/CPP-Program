#include<iostream>
#include<vector>
using namespace std;
int main(){
    //lets create the vactor of 5 element with 35 value
    vector<int> v(5,35);
    vector <int> ::iterator it;
    for(auto it =v.begin();it!=v.end();it++){
        cout<<*it<<"  ";
    }
    cout<<endl;
    //lets create a vector of 5 size like an array 
    vector<int> v1(2) ;
    v1.push_back(2);
    v1.push_back(3);
    //
    v1.push_back(34);
    v1.emplace_back(345); // it will dynamically allocate the memory 
    // it occupy the spacce it store random garabage value
    for(auto element : v1){
        cout<<element <<" ";
    }
    cout<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;// it the total space dynamically taked 
    //it doesn't take the the fashion like for int 4 it times how data is increasing
    //1 2 4 8 // in this way 

    //lets copy with the help of vector 
    vector<int> k(v1);
    cout<<endl;
    for(auto el1 : k){
cout<<el1<<" ";
    }
    return 0 ; 
}