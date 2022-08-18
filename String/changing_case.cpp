#include<iostream>

using namespace std;

int main(){
	
	char s[]="WeLcoME";
	int i;
	for(i=0; s[i] != '\0'; i++){
		if(s[i]>=65 && 90>=s[i]){
			s[i]= s[i]+32;
		}
		else if(s[i]>=97 && 122>=s[i]){
			s[i]= s[i]-32;
		}
	}
	cout<<s;
	
	return 0;
}
