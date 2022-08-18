#include<iostream>

using namespace std;

int main(){
	
	int *p , *q;
	
	p = new int[5];
	q = new int[10];
	
	p[0]=3;
	p[1]=5;
	p[2]=6;
	p[3]=7;
	p[4]=8;
	
	for(int i=0; i<5; i++){
		q[i]=p[i];
	}
	
	delete []p;
	p = q;
	q = NULL;
	
	p[5]=9;
	p[6]=10;
	
	for(int i=0; i<10; i++){
		cout<<p[i]<<" ";
	}
	
	
	return 0;
}
