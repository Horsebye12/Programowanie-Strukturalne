#include<iostream>
#include<string>

using namespace std;

void wyraz(string a){
	cout<<a<<endl; 
}

int main(){
	
	string b;
	cout<<"Wprowadz lancuch: ";
		cin>>b;
	
	wyraz(b);
	
	return 0;
}
