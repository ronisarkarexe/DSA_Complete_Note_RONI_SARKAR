#include<iostream>

using namespace std;

int fun(int n){
	int i = 1;
	while(i<=n){
		cout<<i<<" ";
		i++;
	}
}

int main(){
	
	fun(5);
	return 0;
}
