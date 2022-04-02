// how to copy the list in other list

#include <iostream>
#include<list>
using namespace std;
int main()
{

    list<int> a;

    a.push_back(12);
    a.push_back(12);
    a.push_back(12);
    a.push_back(12);
    a.push_back(12);

    list<int> b(a);
    cout << "the list b is" << endl;
    for (int i : b)
    {
        cout << i << " ";
    }

    return 0;
}