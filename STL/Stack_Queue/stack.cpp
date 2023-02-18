#include<iostream>
#include<stack>
using namespace std;
int main(){
//stack follow lifo principle with top as a pointing element
// 45,2,1,6 let store this and delete 6 from that 
stack<int> st;
st.push(45);
st.push(2);
st.push(1);
st.push(6);
//not delete 6 as it delete the one which insert at the last 
cout<<st.top()<<endl;
cout<<st.size()<<endl;
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;

}
