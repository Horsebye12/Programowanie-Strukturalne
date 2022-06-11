#include<iostream>

using namespace std;

float ciag(int n){
	float tab[n-1];
	tab[0]=1;
	tab[1]=2;
	tab[2]=3;
	
	for(int i=3; i<n+1; i++){
		tab[i]=((tab[i-1]+tab[i-2]+tab[i-3])/3);	
	}
	
	return tab[n];
}

int main(){
	int n;
	
	cout<<"Podaj liczbe wieksza od zera: ";
		cin>>n;
	while(n<=0){
		cout<<"UWAGA: Podaj liczbe wieksza od zera: ";
		cin>>n;
	}
	
	cout<<ciag(n)<<endl;

	return 0;
}
