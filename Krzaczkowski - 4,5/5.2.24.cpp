#include<iostream>
#include<cstring>

using namespace std;

void kopiuj1 (string a){
	int x = a.length();
	char tab[x];
	
	for(int i=0; i<x; i++){
		tab[i]=a[i];
	}
	
	cout<<tab<<endl;
}

void kopiuj2 (char *a){
	int x = 4;
	char tab[x];
	
	for(int i=0; i<x; i++){
		tab[i]=a[i];
	}
	
	cout<<tab<<endl;
}

void kopiuj3 (wchar_t a){
	int x = 4;
	char tab[x];
	
	for(int i=0; i<x; i++){
		tab[i]=a[i];
	}
	
	cout<<tab<<endl;
}

int main(){
	string napis = "test";
	char napis2[] = "test";
	wchar_t c = 'test';
	
	
	kopiuj1(napis);
	kopiuj2(napis2);
	kopiuj3(c);
	
	return 0;
}
