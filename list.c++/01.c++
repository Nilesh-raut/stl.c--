// basic of list

#include <iostream>
#include <list>
using namespace std;
int main()
{

    list<int> n;
    n.push_back(12);
    n.push_back(24);
    n.push_back(36);
    n.push_back(48);
    n.push_front(11);

    for (int i : n)
    {
        cout << i << " ";
    }

    n.pop_back();
    n.pop_front();
    cout<<endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    return 0;
}