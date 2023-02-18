#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> m(3, 59); // [59,59,59]

    // let insert the element at the first place
    m.insert(m.begin(), 100);
    for (auto el : m)
    {
        cout << el << "  ";
    }
    cout << endl;
    m.insert(m.begin() + 1, 9999);
    cout << m.at(1); // it is inserted
    // lets start the 1 ,2 in the first position .
    cout << endl;
    // insert the multiple element in the vector
    m.insert(m.begin() + 1, 2, 2);
    // insert(//iterator , no of item , element )
    //
    for (int el3 : m)
    {
        cout << el3 << "  ";
    }
    m.at(1) = 1; // to manipulate with the assist of index
    cout << endl;
    for (int el4 : m)
    {
        cout << el4 << "  ";
    }
    // insert one vector to the next vector 
    vector<int> me(2, 40); // (no of item , element )
    vector<int> kill;
    kill = {3, 455, 66};
    // inserting me in the kill
    cout << endl;
    kill.insert(kill.begin(), me.begin(), me.end());

    for (auto mit = kill.begin(); mit != kill.end(); mit++)
    {
        cout << *mit << "  ";
    }

    return 0;
}