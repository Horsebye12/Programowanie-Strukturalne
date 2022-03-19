#include<iostream>

using namespace std;

double potega_rek(double a, int b){
	if(b == 0){
		return 1;
	}
	else if(a == 0){
		return 0;
	}
	else if(b<0){
		return 1/a * potega_rek(1/a, (-b)-1);
	}
	else{
		return a * potega_rek(a, b-1);
	}
}

int main(){
	double x;
	int y;
	
	cout<<"Wprowadz podstawe potegi: ";
		cin>>x;
	cout<<"Wprowadz wykladnik potegi: ";
		cin>>y;
		
	double pow=potega_rek(x,y);
	
	cout<<"Wynik potegi: "<<pow<<endl;
	
	return 0;
}
