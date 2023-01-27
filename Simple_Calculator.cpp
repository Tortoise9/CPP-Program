#include<iostream> 
using namespace std; 
//function 
void Addition(int a , int b){
    cout<<"Sum : "<<a+b<<endl;
}
void Substraction(int a , int b){
    cout<<"Difference : "<<a-b<<endl;
}
int main(){
    float a , b ;
    int choice ;
    cout<<"Enter the First number  a : "<<endl;
    cin>>a;
    cout<<"Enter the second number  b : "<<endl;
    cin>>b;
    cout<<"Perform : \n 1. Addition \n 2. Substraction  \n 3.Multiply \n 4.Divide \n 5.Remainder \n. Quotient "<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice ;
    switch(choice){
        case 1 : 
        Addition(a,b);
        break;
        
        case 2:
        Substraction(a,b);
        break;


    }
    return 0; 
}