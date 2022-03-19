#include<iostream>

using namespace std;

char pisanie(char a, int x, int y){
	for(int i=0; i<y; i++){
		for(int i=0; i<x; i++){
			cout<<a;
		}
		cout<<endl;
	}
}

char b; 
int p, r;

int main(){
	
	cout<<"Wpisz znak: ";
		cin>>b;
	cout<<"Wpisz liczbe wystapien znaku w wierszu: ";
		cin>>p;
	cout<<"Wpisz liczbe wierszow: ";
		cin>>r;
		
	pisanie(b, p, r);
	
	return 0;
}
