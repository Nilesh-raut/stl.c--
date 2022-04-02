#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 0> arr ={};
    cout<<"The size of the array "<<arr.size();
    cout<<endl<<"The array is empty "<<arr.empty()<<endl;
    // cout<<"The front of the array is "<<arr.front()<<endl;
    // cout<<"The back of the array is "<<arr.back()<<endl;

    ///DOUBT
    // line no 9,10 ko run karne pr aage ka program exicute nahi ho rha hai. 
    cout<<endl;


    array<int ,3> arr1 ={12,24,36};
    cout<<"The size of array is "<<arr.size()<<endl;
    cout<<"The array is empty "<<arr.empty()<<endl;
    cout<<"The front of array "<<arr1.front()<<endl;
    cout<<"The back of array "<<arr1.back()<<endl;
    return 0;
}