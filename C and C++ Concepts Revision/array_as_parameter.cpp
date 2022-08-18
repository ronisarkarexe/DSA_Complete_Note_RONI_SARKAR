#include<iostream>

using namespace std;

//both are corrent
int fun1(int a[], int n){
	int i;
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}

int fun2(int *a, int n){
	int i;
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}

//dynamic array passing
int * fun3(int s){
	int *p;
	p = new int[s];
	for(int i=0; i<s; i++){
		p[i]=i+1;
	}
	return p;
}

int main(){
	int a[5]={1,2,3,4,5};
	
	
	int *p,s=5;
	p=fun3(s);
	for(int i=0; i<s; i++){
		cout<<p[i]<<" : ";
	}
	
//	for(int x: a)
//	cout<<x<<" ";
	
	return 0;
}
