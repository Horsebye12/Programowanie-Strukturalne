#include<iostream>
#include<cstdio>
#define CONST 11

using namespace std;

void znaki2(char *tab, int n){
	int i=0;
	char znak;
	while((znak=getchar()) && !isspace(znak) && i<n){
		tab[i]=znak;
		i++;
	}
	
	for(int j=0; j<i; j++){
		cout<<tab[j];
	}
	cout<<endl;
}

int main(){
	

	char tablica[CONST];
	znaki2(tablica, CONST);
	
	return 0;
}
