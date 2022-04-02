// some function of stack
#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> a;
    a.push(12);
    a.push(24);
    a.push(36);

    cout << "The size of stack is " << a.size() << endl;

    a.pop();

    cout << "The size of stack is " << a.size()<<endl;

    cout << "Empty or Not " << a.empty();

    return 0;
}