#include<iostream>

using namespace std;

float harmoniczna(float a, float b){
	return 1/(((1/a)+(1/b))/2);
}

float x, y;

int main(){
	cout<<"Program liczby srednia harmoniczna dwoch liczb."<<endl;
	cout<<"Wprowadz pierwsza liczbe: ";
		cin>>x;
	cout<<"Wprowadz druga liczbe: ";
		cin>>y;
		
	float g = harmoniczna(x,y);
	
	cout<<"Srednia harmoniczna: "<<g<<endl;
	
	return 0;
}
