#include<iostream>
#include<vector>
using namespace std;
int main(){
//vector are dynaminc 
vector<int> v;
v.push_back(2);
v.push_back(5);
v.push_back(23);
v.push_back(34);
//push_back is used to insert the element 
v.emplace_back(35);
//emplace_back is alternative of push back where it is faster as compared to 
// push back it assumption container by itself 
for(auto el : v){
    cout<<el<<" ";
}
cout<<endl;
v.pop_back();
//it is used to remove the element from the last index 

//printing using iterator : 
vector<int> :: iterator it ;
for(vector<int>::iterator it = v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}
//here iterator point the address and traverse here v.begin() is a pointer at starting and 
//v.end() is the address which is the pointer to the next address than end 
//example v.last ==101 v.end=102;

return 0 ;

}