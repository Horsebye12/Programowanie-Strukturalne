#include<iostream>

using namespace std;

double potega(double a, int b){
	double pot = 1.0;
	int i;
	
	if(b==0){
		return 1;
	}
	else if(a==0){
		return 0;
	}
	else if(b<0){
		for(i=1; i<=(-b); i++){
			pot *=1/a;
		}
		return pot;
	}
	else{
	for(i=1; i<=b; i++){
		pot *=a;
	}
	return pot;
	}
}
int main(){
	double x;
	int y;
	
	cout<<"Wprowadz podstawe potegi: ";
		cin>>x;
	cout<<"Wprowadz wykladnik potegi: ";
		cin>>y;
		
	double pow=potega(x,y);
	
	cout<<"Wynik potegi: "<<pow<<endl;
	
	return 0;
}
