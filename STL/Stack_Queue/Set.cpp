#include<iostream>
#include<set>
//set stores in the sorted order with the unique code index (no repetation )
using namespace std;
int main(){
    set<int> s;
    //insert  is used to  insert the element 
    s.insert(34);// it make a tree structure 
    s.insert(2);
    s.insert(2);// 2==2 so repetation occur so no insertion operation 
    s.insert(22);
    for(auto el : s){
        cout<<el<<" ";
    }
    s.emplace(11);


}