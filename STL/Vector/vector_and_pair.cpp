#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    vector<pair<string,pair<string,double>>> k ;
    k.push_back({"sushil ",{"Damak",9807089}});
    k.push_back({"Sushant",{"Dharampur",9803899}});
    
    for(int i=0;i<k.size();i++){
        cout<<k[i].first<<" "<<k[i].second.first<<" "<<k[i].second.second<<endl;
    }
    return 0;
}