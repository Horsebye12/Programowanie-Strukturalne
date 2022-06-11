#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int zadanie_a (unsigned int n, int * tab){
	int i, max=tab[0];
	for(i=0; i<n; i++){
		if(tab[i]>max){
			max=tab[i];
		}
	}
	return max;
}

int zadanie_b (unsigned int n, int * tab){
	int i, min=tab[0];
	for(i=0; i<n; i++){
		if(tab[i]<min){
			min=tab[i];
		}
	}
	return min;
}

int zadanie_c (unsigned int n, int * tab){
	int i, max=0;
	for(i=1; i<n; i++){
		if(tab[i]>tab[max]){
			max=i;
		}
	}
	
	return max;
}

int zadanie_d (unsigned int n, int * tab){
	int i, min=0;
	for(i=1; i<n; i++){
		if(tab[i]<tab[min]){
			min=i;
		}
	}
	
	return min;
}

int zadanie_e (unsigned int n, int * tab){
	int i, max=tab[0];
	for(i=0; i<n; i++){
		if(tab[i]>max){
			max=tab[i];
		}
	}
	return max;
}


int zadanie_f (unsigned int n, int * tab){
	int i, max=0;
	for(i=1; i<n; i++){
		if(tab[i]>tab[max]){
			max=i;
		}
	}
	
	return max;
}

int main(){
	int n;
	cout<<"Podaj ilosc elementow tablicy: ";
		cin>>n;
	
	int tab[n];
	int tab_abs[n];
	
	for(int i=0; i<n; i++){
		cout<<"Wprowadz "<<i+1<<" element tablicy: ";
			cin>>tab[i];
		
		int r = abs(tab[i]);
		tab_abs[i] = r;
	}
	
	
	cout<<"Maksymalna wartosc: "<<zadanie_a(n, tab)<<endl;
	cout<<"Minimalna wartosc: "<<zadanie_b(n, tab)<<endl;
	cout<<"Maksymalny indeks: "<<zadanie_c(n, tab)<<endl;
	cout<<"Minimalny indeks: "<<zadanie_d(n, tab)<<endl;
	cout<<"Maksymalna wartosc bezwzgledna: "<<zadanie_e(n, tab_abs)<<endl;
	cout<<"Maksymalny indeks bezwzgledny: "<<zadanie_f(n, tab_abs)<<endl;
	cout<<endl;
	
	return 0;
}
