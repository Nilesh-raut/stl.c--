#include <iostream>
#include <array>
using namespace std;
int main()
{

    int size = 4;
    array<int, 4> nilesh = {12, 24, 36, 48};

    cout<<nilesh[3]<<endl;
    cout<<nilesh.size()<<endl;

    int fornt=nilesh.front();
    cout<<fornt<<endl;

    int back = nilesh.back();
    cout<<back<<endl;

    return 0;
}