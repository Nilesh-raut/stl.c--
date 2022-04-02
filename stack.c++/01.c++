// basic of stack how to create the stack
#include<iostream>
#include<stack>
using namespace std;
int main(){

stack<string>a;

a.push("Nilesh");
a.push("Dukharan");
a.push("raut");

cout<<"The top element is "<<a.top();
 
return 0;
}