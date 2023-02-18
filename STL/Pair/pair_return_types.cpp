#include<iostream>
#include<utility>
//opposite of the dice 
using namespace std;
pair<int,int> Dice(int n){
    pair<int,int> k[3] ;
    k[0]={1,6};
    k[1]={2,5};
    k[2]=make_pair(3,4);
    //or 
    // pair<int,int> k[]={{1,6},{2,5},{3,4}}
    if((n==1)||(n==6)){
        return k[0];
    }
    else if((n==2)||(n==5)){
        return k[1];
    }
    else{
        return k[2];
    }

}
int main(){
        int n;
    cout<<"Enter the side of the dice : "<<endl;
    cin>>n;
       if(n>6){
        n=n%6;
    }
    pair<int,int> m ;
    m = Dice(n);
    if(n==m.first){
        cout<<"The opposite side of the dicee is "<<m.second<<endl;
    }
    else{
        cout<<"the opposite side of the dice is "<<m.first<<endl;
    }

    return 0 ; 
}