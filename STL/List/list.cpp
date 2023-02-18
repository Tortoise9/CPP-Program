#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ls;
    //list is simply doubly linked list for consideration and vector is a singly linked list 
    //dynamic in nature 
    ls.push_back(2);
    ls.emplace_back(3);
    ls.emplace_front(1);//or push_front on the list is very very cheap as compared to the vector insert funtion 
    //
    ls.push_back(34);
    ls.push_back(5);
    for(auto el : ls){
        cout<<el<<"  ";
    }
    cout<<endl;
    
    return 0;
}