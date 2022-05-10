#include<bits/stdc++.h>

using namespace std;

int seclect(int arr[], int n){
	
	int min,j,i,temp;
	
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		if(min!=i){
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
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
	
	seclect(arr,n);
	
	return 0;
}
