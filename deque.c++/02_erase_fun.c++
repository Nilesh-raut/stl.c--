#include<iostream>
#include<deque>
using namespace std;
int main(){
 
deque<int>d;
d.push_back(12);
d.push_back(24);
d.push_back(36);

for(int i :d){
    cout<<i<<" ";
}

d.erase(d.begin(),d.begin()+1);
cout<<endl;
for(int i :d){
    cout<<i<<" ";
}


 
return 0;
}