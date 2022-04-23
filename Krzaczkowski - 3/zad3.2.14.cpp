#include<iostream>

using namespace std;

bool sprawdz(int *a, int *b, int n){
	if(*a>=0 && *a<=n && *b>=0 && *b<=n){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a, b, c;

	cout<<"Podaj pierwsza wartosc: ";
		cin>>a;
	cout<<"Podaj druga wartosc: ";
		cin>>b;
	cout<<"Podaj liczbe do ktorej chcesz sprawdzac: ";
		cin>>c;
	
	int *wsk1 = &a;
	int *wsk2 = &b;
	
	cout<<sprawdz(wsk1, wsk2, c);
		
	return 0;
}
