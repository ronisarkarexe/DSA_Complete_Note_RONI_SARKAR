#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(int i=0; i<n-1; i++){
		int f = 0;
		for(int j=0; j<n-1-i; j++){
			cout<<f<<" ";
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				f=1;
			}
		}
		if(f==0){
			break;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
