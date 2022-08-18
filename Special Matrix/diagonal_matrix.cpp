#include<iostream>

using namespace std;

struct Matrix{
	int A[10];
	int n;
};

int Set(Matrix *m, int i, int j, int x){
	if(i==j){
		m->A[i-1] = x;
	}
}

int Get(Matrix m, int i, int j){
	if(i==j){
		return m.A[i-1];
	}else{
		return 0;
	}
}

int Display(Matrix m){
	int i , j;
	
	for(i=0; i<m.n; i++){
		for(j=0; j<m.n; j++){
			if(i==j){
				cout<<m.A[i]<<" ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}

int main(){
	Matrix m;
	m.n = 5;
	
	Set(&m,1,1,5);
	Set(&m,2,2,7);
	Set(&m,3,3,2);
	Set(&m,4,4,9);
	Set(&m,5,5,8);
	
	cout<<Get(m,2,2)<<endl;
	
	Display(m);
	
	return 0;
}
