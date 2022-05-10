#include<bits/stdc++.h>

using namespace std;

int counting(int arr[], int n){
	
	int k;
	int b[n];
	k = INT_MIN;
	
	for(int i=0; i<n; i++){
		if(arr[i]>k){
			k=arr[i];
		}
	}
	
	int count[k+1]={0};
	for(int i=0; i<n; i++){
		count[arr[i]]++;
	}
	
	for(int i=1; i<=k; i++){
		count[i]+=count[i-1];
	}
	
	for(int i=n-1; i>=0; i--){
		b[--count[arr[i]]]=arr[i];
	}
	
	for(int i=0; i<n; i++){
		arr[i]=b[i];
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	counting(arr,n);
	
	return 0;
}
