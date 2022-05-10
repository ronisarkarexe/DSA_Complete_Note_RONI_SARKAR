#include<bits/stdc++.h>

using namespace std;

int display(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int partive(int a[],int lb, int ub){
	
	int pivit,t;
	pivit=a[lb];
	int start=lb;
	int end=ub;
	
	while(start<end){
		while(a[start]<=pivit){
			start++;
		}
		while(a[end]>pivit){
			end--;
		}
		if(start<end){
			t=a[start];
			a[start]=a[end];
			a[end]=t;
		}
	}
	t=a[lb];
	a[lb]=a[end];
	a[end]=t;
	
	return end;
}

int quickSort(int arr[],int lb, int ub){
	
	if(lb<ub){
		int loc = partive(arr,lb,ub);
		quickSort(arr,lb,loc-1);
		quickSort(arr,loc+1,ub);
	}
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	quickSort(arr,0,n-1);
	display(arr,n);
	return 0;
}
