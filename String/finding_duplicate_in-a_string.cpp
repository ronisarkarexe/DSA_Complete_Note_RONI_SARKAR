#include<iostream>

using namespace std;

int main(){
	char a[] = "finding";
	int i, j, H[26]={0};
	
	for(i = 0; a[i]!='\0'; i++){
		H[a[i]-97]++;;
	}
	
	for(i = 0; i<26; i++){
		if(H[i]>1){
			cout<<char(i+97)<<" "<<H[i]<<endl;
		}
	}
	
	return 0;
}
