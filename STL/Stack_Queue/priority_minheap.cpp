#include<iostream>
#include<queue>
using namespace std;
int main(){
//min heap 
priority_queue<int,vector<int>,greater<int>> pq ,a ,b;
pq.push(34);// it takes logn time to perform a task 
pq.push(5);
pq.push(1);
pq.push(10);
//not it is a min heap which mean that the smallest element should be  in the top element or root node 
cout<<pq.top()<<endl;
pq.pop();
cout<<pq.top()<<endl;
cout<<pq.size()<<endl;
cout<<pq.empty()<<endl;
a.emplace(34);
a.emplace(1);
b.emplace (9);
b.emplace(5);
a.swap(b);
cout<<a.top()<<endl;//b min element is 5 so it will replace 
return 0; 
}