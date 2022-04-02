#include<iostream>
#include<vector>
using namespace std;
int main(){
 
vector<int>v;

v.push_back(12);
v.push_back(24);
v.push_back(36);
v.push_back(48);


cout<<"The front element is "<<v.front()<<endl;
cout<<"The back element is "<<v.back()<<endl;



 
return 0;
}