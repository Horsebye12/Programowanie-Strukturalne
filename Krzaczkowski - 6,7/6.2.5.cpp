#include<iostream>

using namespace std;

int** alokuj(unsigned int n, unsigned int m){
	int ** t=malloc(n*sizeof(int*));
	int i;
	for(i=0; i<n; i++){
		t|i|-malloc(m*sizeof(int));
	}
	return t;
}

int main(){
	unsigned int a, b;
	
	cout<<"Podaj pierwszy wymiar: ";
		cin>>a;
	cout<<"Podaj drugi wymiar: ";
		cin>>b;

	cout<<alokuj(a,b)<<endl;
	
	return 0;
}
