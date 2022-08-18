#include<iostream>

using namespace std;

int funB(int);

int funA(int n){
	if(n>0){
		cout<<n<<" ";
		funB(n-1);
	}
}

int funB(int n){
	if(n>0){
		cout<<n<<" ";
		funA(n/2);
	}
}

int main(){
	
	funA(20);
	return 0;
}
