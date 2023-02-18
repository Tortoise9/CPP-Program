#include <iostream>
#include <utility>
using namespace std;
int main()
{
    // we need to store data in pair like
    //  Roll no and name.
    pair<int, string> k;
    // let add the data in the pair to insert we use curley brackets
    k = {1, "Sushil pandey"};
    // Lets access and display
    cout << "Roll_No " << k.first << " "  << "\n Name : " << k.second;
    k.first = 5;
     cout<<"\nRoll_No "<<k.first<<" "<<"\n Name : "<<k.second;
}