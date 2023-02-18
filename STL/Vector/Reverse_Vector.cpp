#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     vector<int> k ;
     k.emplace_back(3);
     k.push_back(3);
     k.push_back(4);
     for( vector<int> ::iterator it = k.begin();it!=k.end();it++){
        cout<<*it<<"  ";
     }
     cout<<endl;
     //reverse of the vector is simiply done by this 
     vector<int> m ;
     m={2,3,4,2,5};
     for(auto rit = m.rbegin(); rit!=m.rend();rit++){
        cout<<*rit<<"  ";
     }
     //r.begin() point to the last element and rend point to beyond of the first element 
     // r.begin ++  is plus it is arrange in opposite order where last element is our first element 
     return 0; 

}