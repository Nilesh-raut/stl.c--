// how to create max heap,min heap
// how to find the minimum element using priority queue
// This is minimum heap

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(236);
    mini.push(65);
    mini.push(98);
    mini.push(63);

    int size = mini.size();
    for (int i = 0; i < size; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    return 0;
}