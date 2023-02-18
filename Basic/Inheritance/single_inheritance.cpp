#include<iostream>
using namespace std;
class Animal{
private : 
bool eat =1;
protected :
int  eyes=2 ;
int legs=2;

public : 
void display(){
    cout<<"Every animal have : "<<eyes<<"  eyes ."<<endl;
    cout<<"Do every animal eat  : "<<boolalpha<<eat<<endl;
}

};
class human:public Animal {
        public:
    void displayderive(){
        cout<<"Humans have "<<legs <<"  legs "<<endl;
    }

};
int main(){
human h;
h.display();
h.displayderive();


return 0 ;

}
