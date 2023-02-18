#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(34);
    st.emplace(3);//insertion 
    stack<int>a;
    a.push(3);

    cout<<a.top()<<endl;
    stack<int> b;
    b.push(9);
    a.swap(b);//swap funtion in stack 
    cout<<"Before the swaping : "<<a.top() <<"\nAfter : " <<b.top();

    
    return 0;
}