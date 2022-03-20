#include<iostream>

using namespace std;

void znaki(int x){
	int i=0;
	char znak;
	
	while(scanf("%c", &znak) != 0 && i<x){
		i++;
	}
	
}


int main(){
	
	int n;
	cout<<"Podaj liczbe znakow: ";
		cin>>n;

	
	znaki(n);
	
	return 0;
}
