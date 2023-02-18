#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q ;
    q.push(34);
    q.push(2);
    q.push(4);
    cout<<q.front()<<endl; //first element 
    cout<<q.back()<<endl;//last element
    q.pop();
    cout<<q.front()<<endl;//front element will be removed 
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl; // 0 means not empty
    queue<int> a ,b ;
    a.push(34);
    cout<<a.front()<<" : Before the swapping "<<endl;
    b.push(1);
    a.swap(b);
    cout<<a.front()<<" : After the swapping "<<endl;
return 0 ;
}