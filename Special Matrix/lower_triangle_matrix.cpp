#include<iostream>

using namespace std;

struct Matrix{
	int *A;
	int n;
};

int Set(Matrix *m, int i, int j, int x){
	if(i>=j){
		m->A[i*(i-1)/2+j-1] = x;
	}
}

int Get(Matrix m, int i, int j){
	if(i>=j){
		return m.A[i*(i-1)/2+j-1];
	}else{
		return 0;
	}
}

int Display(Matrix m){
	int i , j;
	
	for(i=1; i<=m.n; i++){
		for(j=1; j<=m.n; j++){
			if(i>=j){
				cout<<m.A[i*(i-1)/2+j-1]<<" ";
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
	int i, j, x;
	
	cout<<"Enter Dimension: ";
	cin>>m.n;
	m.A = new int[m.n*m.n-1/2];
	
	cout<<"Enter all element: ";
	for(i=1; i<=m.n; i++){
		for(j=1; j<=m.n; j++){
			cin>>x;
			Set(&m, i, j, x);
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	Display(m);
	
	return 0;
}
