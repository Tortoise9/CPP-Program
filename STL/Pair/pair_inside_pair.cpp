#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int,string> k[]={{1,"Sushil"},{2,"somnath"},{3,"Sushant"}};
    for(auto el : k){
        cout<<el.first <<" "<<el.second<<endl;
    }

    //pair inside pair let see
  std:: pair<string,pair<int,string>> d = {"sushil",{3,"Damak"}};
    cout<<"Name : "<<d.first<<endl;
    cout<<"Roll No :"<<d.second.first<<endl;
    cout<<"Address : "<<d.second.second<<endl;
    
    return 0;

}