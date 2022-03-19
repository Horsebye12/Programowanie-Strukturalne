#include<iostream>
#include<string>

using namespace std;

void znaki2(int x){
	cout<<"Wprowadz lanuch: ";
	string slowo;	
	
		cin>>slowo;
	
	for(int i=0; i<x; i++){
		cout<<slowo[i];
	}
	cout<<endl;
}

int main(){
	
	int a;
	cout<<"Ile znakow max ma miec lancuch?: ";
		cin>>a;

	znaki2(a);
	
	return 0;
}
