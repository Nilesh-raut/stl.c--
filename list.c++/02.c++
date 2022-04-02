// erase function

#include <iostream>
#include <list>
using namespace std;
int main()
{

    list<int> a;
    a.push_back(12);
    a.push_back(24);
    a.push_back(36);
    a.push_front(48);

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    a.erase(a.begin());

    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}