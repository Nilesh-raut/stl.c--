// empty function me zero kab aata hai or one kb aata hai

#include <iostream>
#include <array>
using namespace std;

int main() {
	//declaring two arrays 
	array<int,0> arr1{};         
	array<int,5> arr2{};        
	array<int,5> arr3{10, 20, 30};     
	array<int,5> arr4{10, 20, 30, 40, 50};


	//printing arr_name.empty() value
	cout<<"arr1.empty(): "<<arr1.empty()<<endl;
	cout<<"arr2.empty(): "<<arr2.empty()<<endl;
	cout<<"arr3.empty(): "<<arr3.empty()<<endl;
	cout<<"arr4.empty(): "<<arr4.empty()<<endl;

	//checking and printing messages 
	if(arr1.empty())
		cout<<"arr1 is empty"<<endl;
	else
		cout<<"arr1 is not empty"<<endl;
	
	if(arr2.empty())
		cout<<"arr2 is empty"<<endl;
	else
		cout<<"arr2 is not empty"<<endl;
	
	if(arr3.empty())
		cout<<"arr3 is empty"<<endl;
	else
		cout<<"arr3 is not empty"<<endl;
	
	if(arr4.empty())
		cout<<"arr4 is empty"<<endl;
	else
		cout<<"arr4 is not empty"<<endl;

	return 0;
}
