// array declaration using stl

#include <iostream>
#include <array>
using namespace std;
int main()
{

    array<int, 5> arr = {12, 24, 36, 48, 60};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}