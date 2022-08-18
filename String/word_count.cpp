#include<iostream>

using namespace std;

int main(){
	
	char s[]="How are you      roni sarkar";
	int i, count = 0;
	for(i=0; s[i] != '\0'; i++){
		if(s[i]==' ' && s[i-1] != ' '){
			count++;
		}
	}
	cout<<"Vowel: "<<count+1;
	
	return 0;
}
