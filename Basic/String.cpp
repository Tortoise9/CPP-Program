#include<iostream>
#include<string>
using namespace std;
int main(){
    //string is immutability in cPP  not like a string in the python 
    string name= "Sam";
    cout<<name<<endl;
    name[0]='R';
    cout<<name<<endl;
    string surname = " Rai";
    cout<<name + surname<<endl;
    string Full_name = name+surname;
    cout<<Full_name;


}