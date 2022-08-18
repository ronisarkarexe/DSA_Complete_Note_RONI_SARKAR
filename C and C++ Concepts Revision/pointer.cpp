#include<iostream>

using namespace std;

int main(){

	int a = 10;
	int *p;   // Declercation
	p = &a; //initilazation
	
	
	cout<<*p<<endl; //dreferenceing
	cout<<p<<endl;
	
	
	int A[5]={1,2,3,4,5};
	
	int *pnt;
	pnt = A;
	//pnt = &A it is not right sentecet
	//pnt = &A[0] it is right
	
	for(int i=0; i<5; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++){
		cout<<pnt[i]<<" ";
	}
	
	int *m;
	m = new int[3];
	m[0]=10; m[1]=20; m[2]=30l;
	
	for(int i=0; i<3; i++){
		cout<<m[i]<<" ";
	}
	
	free(m);
	
	//malloc are use for accecing memory at heap in c
	// new are use in c++ ( new int[size])

	return 0;
}
