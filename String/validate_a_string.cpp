#include<iostream>

using namespace std;

int valid(char *s){
	int i;
	
	for(i=0; i<s[i] != '\0'; i++){
		if(!(s[i]>=65 && 95>=s[i]) && !(s[i]>=97 && 122>=s[i]) && !(s[i]>=48 && s[i]<=57)){
			return 0;
		}
	}
	return 1;
}

int main(){
	
	char *s="Ani82748";
	
	int v = valid(s);
	if(v == 1){
		cout<<"Password validate";
	}
	else{
		cout<<"Password not validate";
	}
	return 0;
}
