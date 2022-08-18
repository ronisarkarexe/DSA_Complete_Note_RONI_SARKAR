#include<iostream>

using namespace std;

//int a = 0;

int fun(int n){
	
	static int a = 0;
	
	if(n>0){
		a++;
		return fun(n-1) + a;
	}
}

int main(){
	
	int a = 5;
	cout<<fun(a)<<endl;
	
	//int a = 5;
	cout<<fun(a);
	
	return 0;
}
