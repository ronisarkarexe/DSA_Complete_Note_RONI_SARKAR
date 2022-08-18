#include<iostream>

using namespace std;

int main(){
	
	char s[]="How are you";
	int i, count = 0, ccount = 0;
	for(i=0; s[i] != '\0'; i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			count++;
		}
		else if((s[i]>=65 && 95>=s[i]) || s[i]>=97 && 122>=s[i]){
			ccount++;
		}
	}
	cout<<"Vowel: "<<count<<endl;
	cout<<"Consonents : "<<ccount;
	
	return 0;
}
