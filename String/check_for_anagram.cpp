#include<iostream>

using namespace std;

int main(){
	char a[] = "rooi";
	char b[] = "iroo";
	
	int i, j, H[26]={0}, c = 0;
	
	for( i=0; a[i]!='\0'; i++ ){
		H[a[i]-97]+=1;
	}
	
	for(i = 0; b[i]!='\0'; i++){
		H[b[i]-97]-= 1;
	}
	
	for(i=0; i<26; i++){
		if(H[i]==1){
			c = 1;
			break;
		}
	}
	
	if(c==0){
		cout<<"A";
	}
	else{
		cout<<"not a";
	}
	
	return 0;
}
