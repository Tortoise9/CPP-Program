#include<iostream>
#include<queue>
using namespace std;
int main(){
    // this is max heap  in dsa as it takes the highest or max value in the top 
    priority_queue<int> pq;
    pq.push(1);
    pq.push(7);
    pq.push(2);
    pq.push(5);
    cout<<pq.top()<<endl; 
    //this will make the priority to the largest rank data  in here 7 is the top most because 7 > all other element it should be serve first in 
    // the order like interrupt . the greater the order the first it should be solved or serve 
    cout<<pq.size()<<endl;
    pq.push(19);
    cout<<pq.top()<<endl;//here it is greater so it will first server when it  is total serve than the 19 will be removed and the greatest value 
    //rank interger or rank is serve it is widely applicable in the computer to run the task in the priority or in rank format 
    pq.pop();
    cout<<pq.top()<<endl; // 19 is serve or it task is performed sucessfully 

    return 0 ;
}