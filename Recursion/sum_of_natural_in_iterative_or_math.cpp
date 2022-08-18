#include<iostream>

using namespace std;


// sun of iterative

int sum(int n){
	int s = 0;
	for(int i=1; i<=n; i++){
		s=i+s;
	}
	return s;
}

// math
int sumFormula(int n){
	return (n*(n+1))/2;
}

int main(){
	
	int a;
	a = sumFormula(5);
	cout<<a;
	
	return 0;
}
