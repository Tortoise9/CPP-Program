#include<iostream>
#include<utility>
using namespace std;
int Sum(pair<int,int> p){
    return p.first*p.second;
}
int multiply (pair<int,int>p){
    return p.first*p.second;
}
float Divide(pair<int,int> p){
    float k =p.first/p.second;
    return k;
}
int main(){
    pair<int,int> k= make_pair(10,5);
    int sum = Sum(k);
    int mul = multiply(k);
    float divi = Divide(k);
    cout<<"Sum : "<<sum<<endl;
    cout<<"MUL : "<<mul<<endl;
    cout<<"Divide :"<<divi<<endl;
    return 0;
}