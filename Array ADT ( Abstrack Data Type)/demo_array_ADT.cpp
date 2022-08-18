#include<iostream>

using namespace std;

struct Array {
	int *A;
	int size;
	int length;
};

int Display(struct Array arr){
	
	cout<<"Elements are: ";
	for(int i=0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
}


int main(){
	Array arr;
	int n;
	
	cout<<"Enter size of an array: ";
	cin >> arr.size;
	
	arr.A = new int[arr.size];
	arr.length = 0;
	
	cout<<"Enter number of numbers: ";
	cin >> n;
	
	cout<<"Enter all Elements "<<endl;
	for(int i=0; i<n; i++){
		cin >> arr.A[i];
	}
	arr.length = n;
	
	Display(arr);
	return 0;
}
