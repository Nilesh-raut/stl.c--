#include<iostream>
#include<deque>
using namespace std;
int main(){
 
deque<int>a;

a.push_back(12);
a.push_back(24);
a.push_back(36);
a.push_back(48);
a.push_back(60);
a.push_back(72);
a.push_front(11);
a.push_front(10);

for(int i:a){
    cout<<i<<" ";
}

cout<<endl<<"The front element is "<<a.front();
cout<<endl<<"The back element is "<<a.back();
cout<<endl<<"The size of element is "<<a.size();


 
return 0;
}