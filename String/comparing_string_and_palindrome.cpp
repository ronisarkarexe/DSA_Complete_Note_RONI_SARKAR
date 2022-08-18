#include<iostream>

using namespace std;

// palindrome check
int main(){
	int i, j, c = 1;
	char a[] = "nitin";
	char b[4];
	
	
	for( i=0 ; a[i] != '\0' ; i++ ){
	} 
	i -= 1;
	
	for(j=0; i>=0; i--, j++){
		b[j] = a[i];
	}
	b[j] = '\0';
	
	for(i=0, j=0; i<a[i]!='\0' && j<b[j]!='\0'; i++, j++){
		if(a[i]!=b[j]){
			c = 0;
		}
	}
	
	if(c == 1){
		cout << "P";
	}
	else{
		cout<< "N P";
	}
	return 0;
}


//comparing a string
int main1(){
	
	char a[] = "Roni";
	char b[] = "roni";
	
	int i, j, c = 1;
	
	for(i=0,j=0; a[i] != '\0' && b[j] != '\0'; i++, j++){
		if(a[i] != b[j]){
			c = 0;
			break;
		}
	}
	
	if(c == 1){
		cout<<"equal";
	}else{
		cout<<"Not equal";
	}
	
	return 0;
}
