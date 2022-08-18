#include<iostream>
#include<algorithm>

using namespace std;

int perm(char s[], int k){
	static int A[10] = {0};
	static char R[10];
	
	int i;
	
	if(s[k] == '\0'){
		R[k] = '\0';
		cout<<R<<" ";
	}else{
		for(i=0; s[i]!='\0'; i++){
			if(A[i]==0){
				R[k] = s[i];
				A[i] = 1;
				perm(s, k + 1);
				A[i] = 0;
			}
		}
	}
}


int perm1(char s[], int l, int h){
	int i;
	
	if(l==h){
		cout<<s<<" ";
	}
	else{
		for(i=l; i<=h; i++){
			swap(s[l], s[i]);
			perm1(s, l+1, h);
			swap(s[l], s[i]);
		}
	}
}

int main(){
	
	
	char s[] = "ABC";
	perm1(s, 0, 2);
	
	return 0;
}
