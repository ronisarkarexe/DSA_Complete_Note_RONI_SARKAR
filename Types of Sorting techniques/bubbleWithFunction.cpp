#include<bits/stdc++.h>

using namespace std;

int bubble(int arr[], int n){
	
	int count = 1,f,temp;
	while(count<n){
		f=0;
		for(int i=0; i<n-count; i++){
			
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				f=1;
			}
		}
		count++;
		if(f==0){
			break;
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
	
	bubble(arr,n);
	
	return 0;
}
