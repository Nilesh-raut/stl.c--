#include<iostream>
#include<queue>
using namespace std;
int main(){

queue<string>a;

a.push("nilesh");
a.push("dukharan");
a.push("raut");

cout<<a.front()<<endl; 

cout<<"The size of a queue is "<<a.size()<<endl;

a.pop();

cout<<"The size of a queue after the pop "<<a.size();




return 0;
}