#include<iostream>

using namespace std;

double taylor(double x, double n){
	
	static double s;
	if(n==0){
		return s;
	}
	s = 1+ x/n * s;
	return taylor(x, n-1);
}

double taylor1(double x, double n){
	double s = 1;
	int i;
	
	double num = 1;
	double den = 1;
	
	for(i=1; i<=n; i++){
		num*=x;
		den*=i;
		s+=num/den;
	}
	return s;
}

int main(){
	cout<<taylor1(1,10);
	return 0;
}
