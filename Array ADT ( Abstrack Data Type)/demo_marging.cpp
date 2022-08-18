#include<iostream>

using namespace std;

struct Array{
	int A[20];
	int size;
	int length;
};

int Display(Array arr){
	for(int i=0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
}

Array* Marge(Array *arr1, Array *arr2){
	
	int i, j, k;
	i=j=k=0;
	
	Array *arr3 = new (Array);
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}
		else{
			arr3->A[k++]=arr2->A[j++];
		}
	}
	
	for(; i<arr1->length; i++){
		arr3->A[k++]=arr1->A[i];
	}
	
	for(; j<arr2->length; j++){
		arr3->A[k++]=arr2->A[j];
	}
	
	arr3->length=arr1->length + arr2->length;
	arr3->size = 10;
	
	return arr3;
}

int main(){
	Array arr1={{1,2,3,4,10},20,5};
	Array arr2={{6,7,4,9,12},20,5};
	
	Array *arr3;
	arr3 = Marge(&arr1, &arr2);
	
	Display(*arr3);
	
	return 0;
}
