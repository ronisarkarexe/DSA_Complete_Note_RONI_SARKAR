#include<iostream>

using namespace std;

// 2st method
int main(){
	
	char a[] = "roni";
	int i, j, t;
	for(j=0; j<a[j] != '\0'; j++){
		
	}
	j-=1;
	
	for(i=0; i<j; i++, j--){
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	
	cout<<a<<endl;
	return 0;
}

// 1st method
int main2(){
	
	char a[] = "roni";
	char b[4];
	int i, j;
	for(i=0; i<a[i] != '\0'; i++){
		
	}
	i-=1;
	
	for(j=0; i>=0; i--, j++){
		b[j]=a[i];
	}
	b[j]='\0';
	cout<<b<<endl;
	return 0;
}

