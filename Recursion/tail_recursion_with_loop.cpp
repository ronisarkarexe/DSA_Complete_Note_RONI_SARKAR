#include<iostream>

using namespace std;


int fun(int a){
	while(a>0){
		cout<<a<<" ";
		a--;
	}
}

int main(){
	
	int a = 5;
	fun(a);
	
	return 0;
}
