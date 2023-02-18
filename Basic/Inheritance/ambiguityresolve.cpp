#include<iostream>
using namespace std;
class A{
private : 
int student ;
public:
void display(int n){
    student= n ;
    cout<<"the toal number of student class A is "<<student<<endl;
}
};
class B :public A{
    private :// it is not inherited
    int student ;
    public :
    void display(int student ){
        this->student = student ;
cout<<"the total number of student of class B  is "<<student<<endl;
    }

};

int main(){
    B b;
    // b.display(34);//this will only access the derived class display funtion inorder to access the class A display funtion we can use 
    b.A::display(40);
    b.B::display(34);
    
    return 0 ; 


    
}