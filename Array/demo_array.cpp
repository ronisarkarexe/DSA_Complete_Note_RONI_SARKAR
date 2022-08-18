#include<iostream>

using namespace std;

int main(){
	
	int a[5]={1,2,3,4,5};
	int b[10]={1,2,3};
	int *p;
	
	p = new int[5];
	p[0]=3;
	p[1]=5;
	p[2]=6;
	p[3]=7;
	p[4]=8;
	
	
	cout<<2[a]<<endl;
	cout<<a[2]<<endl;
	
	for(int i=0; i<10; i++){
		cout<<b[i]<<" ";
	}
	
	cout<<endl;	
	for(int i=0; i<5; i++){
		cout<<p[i]<<" ";
	}
	
	delete []p;
	
	return 0;
}
