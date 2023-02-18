//#include<bits/stdc++.h> // this will include all the header file used it instead 
#include<iostream>
#include<utility>
using namespace std;
void print(std::pair<int,string>p[], int n){
    for(int i=0;i<n;i++){
        cout<<"\n"<<p[i].first<<"\t"<<p[i].second;
    }
}

int main(){
    //lets create the pair of 5 size of name & int 
    int nth_term=5;
    pair<int , string> p[nth_term];
    for(int i=0;i<5;i++){
        cout<<"Enter the Detail of Student "<<i+1<<"Roll number : ";
        cin>>p[i].first;
        cout<<"\nEnter the Name  : ";
        cin>>p[i].second;
    }
    print(p,nth_term);
    return 0;
    
}