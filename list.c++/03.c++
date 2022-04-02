// how to find teh size of list
#include<iostream>
#include<list>
using namespace std;
int main(){
 
list<int>a;


a.push_back(12);
a.push_back(12);
a.push_back(12);
a.push_back(12);
a.push_back(12);

cout<<"The size of the list is "<<a.size()<<endl;

return 0;
}