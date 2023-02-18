#include<iostream>
using namespace std;
class hero {
    private : 
    float height = 5.6;
    //this is not derive to the derive class because of the private specifier no inherited 
    protected :
    int flops =1;
    public:
    int total_flims=3;

};
class salman: private hero{
    //in private visibility mode we know that protected ,private and public variable of base class is derived in the private variable of the derived class
    private : 
    string name = "salman ";
    //other variable of base class is visible here or derived here 
    protected:
    //no item 
    public : 
    void display(){
    cout<<"NO 1 . "<<name<<endl;
    // cout<<"Height : "<<height<<endl;
    cout<<"flops : "<<flops<<endl;
    cout<<"Total films "<<total_flims<<endl;

    }
};
int main(){
    salman s;
    s.display();
    return 0 ;


}