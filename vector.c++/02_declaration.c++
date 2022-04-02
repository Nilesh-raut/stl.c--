#include<iostream>
#include<vector>
using namespace std;
int main(){
 
vector<int>v;

// cout<<"capacity of element "<<v.capacity()<<endl;

// // how to insert the element in vector 
// v.push_back(8);
// v.push_back(8);
// cout<<"capacity of element "<<v.capacity()<<endl;
// v.push_back(8);
// v.push_back(8);
// cout<<"capacity of element "<<v.capacity()<<endl;
// v.push_back(8);
// cout<<"capacity of element "<<v.capacity()<<endl;

// cout<<v.size()<<endl;


vector<int>n;

n.push_back(12);
cout<<"The capacity is "<<n.capacity()<<endl;
cout<<"The size is "<<n.size()<<endl<<endl;


n.push_back(24);
cout<<"The capacity is "<<n.capacity()<<endl;
cout<<"The size is "<<n.size()<<endl<<endl;


n.push_back(36);
cout<<"The capacity is "<<n.capacity()<<endl;
cout<<"The size is "<<n.size()<<endl<<endl;
 
return 0;
}