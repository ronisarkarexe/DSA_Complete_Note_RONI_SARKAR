#include<iostream>

using namespace std;

int fact(int n){
	if(n>0){
		if(n==1){
			return 1;
		}
		else{
			return fact(n-1)*n;
		}
	}
	else{
		return -1;
	}
}

int fact1(int n){
	int a = 1;
	for(int i=1; i<=n; i++){
		a =  a*i;
	}
	return a;
}

int main(){
	cout<<fact(4);
	return 0;
}
