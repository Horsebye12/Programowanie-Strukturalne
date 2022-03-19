#include<iostream>

using namespace std;

void znaki(int x){
	char tab[x];
	
	for(int i=0; i<=x; i++){
		tab[i]=getchar();
	}
	
	for(int i=0; i<=x; i++){
		cout<<tab[i];
	}
	cout<<endl;
	
}


int main(){
	
	int n;
	cout<<"Podaj liczbe znakow: ";
		cin>>n;

	
	znaki(n);
	
	return 0;
}
