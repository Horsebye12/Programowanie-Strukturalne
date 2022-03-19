#include<iostream>

using namespace std;

double min(double x, double y){
	if(x>y){
		cout<<"Wieksza liczba: "<<x<<endl;
	}
	else if(x==y){
		cout<<"Liczby sa rowne"<<endl;
	}
	else{
		cout<<"Wieksza liczba: "<<y<<endl;
	}
}

int main(){
	
	double a, b;
	
	cout<<"Wprowadz dwie liczby - program porowna ktora jest wieksza"<<endl;
		cin>>a;
		cin>>b;
	
	min(a,b);
	
	
	return 0;
}
