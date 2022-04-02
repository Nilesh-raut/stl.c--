// how to find the maximum element
// this is maximum heap
#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> maximum;

    maximum.push(45);
    maximum.push(97);
    maximum.push(31);
    maximum.push(645);
    maximum.push(54);

    int size = maximum.size();
    for (int i = 0; i < size; i++)
    {
        cout << maximum.top() << " ";
        maximum.pop();
    }

    return 0;
}