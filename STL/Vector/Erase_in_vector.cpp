#include<iostream>
#include<vector>
using namespace std;
int main(){
    // lets create the vector 
    vector<int> k ={3,233,542,52,32 ,44,26,33};
    //in order to erase the 
    k.erase(k.begin());//pass the address in erase 
    //it will erase the first element 
    for(auto it = k.begin(); it !=  k.end();it++){
        cout<<*it<<"  ";
    }
    cout<<endl;
    k.erase(k.end()-1);
    for(auto el :k ){
        cout<<el <<" ";
    }
    cout<<endl;
    //lets delete bunch of element at a time 
    k.erase(k.begin()+1,k.end()-1);
    for(auto el1 : k){
        cout<<el1<<"  ";
    }

return 0;
}