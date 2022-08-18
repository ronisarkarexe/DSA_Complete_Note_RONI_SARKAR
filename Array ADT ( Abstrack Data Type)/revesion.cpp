#include<iostream>

using namespace std;

struct Array{
	int A[20];
	int size;
	int length;
};

int Display(Array arr){
	cout<<"Elements are: ";
	for(int i=0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
}

int main(){
	
	Array arr={{1,2,3,4,5,6,7,8,9,10}, 20 , 10};
	
	Display(arr);
	
	return 0;
}
