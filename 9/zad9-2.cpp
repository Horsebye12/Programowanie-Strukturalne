#include<iostream>

using namespace std;

char rzad_zn(char ch, int i, int j){
	for(int x=0; x<j; x++){
		for(int x=0; x<i; x++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

int main(){
	char a;
	int b, c;
	
	cout<<"Wprowadz znak: ";
		cin>>a;
	cout<<"Wprowadz liczbe kolumn: ";
		cin>>b;
	cout<<"Wprowadz liczbe wierszy: ";
		cin>>c;
		
	rzad_zn(a,b,c);
	
	return 0;
}
