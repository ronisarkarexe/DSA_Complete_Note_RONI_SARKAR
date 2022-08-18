#include<iostream>

using namespace std;

//callby value
int swap(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

//callby address
int swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//callby reference
int swap(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

//callby mixed
int swap4(int &x, int *y){
	int temp;
	temp = x;
	x = *y;
	*y = temp;
}


int main(){
	
	int a = 10, b = 20;
	swap4(a,&b);
	//swap(&a,&b); callby address
	cout<<a<<" "<<b;
	
	return 0;
}
