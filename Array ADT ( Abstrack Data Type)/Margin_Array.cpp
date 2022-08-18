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

struct Array *Merge(Array *arr1, Array *arr2){
	
	int i, j, k;
	i=j=k=0;
	
	struct Array *arr3 = new (Array);
	
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}
		else{
			arr3->A[k++]=arr2->A[j++];
		}
	}
	
	for( ; i<arr1->length; i++){
		arr3->A[k++]=arr1->A[i];
	}
	
	for( ; j<arr2->length; j++){
		arr3->A[k++]=arr2->A[j];
	}
	
	arr3->length = arr1->length + arr2->length;
	arr3->size = 10;
	return arr3;
}

// if union are sorted order video 117.
struct Array *Union(Array *arr1, Array *arr2){
	
	int i, j, k;
	i=j=k=0;
	
	struct Array *arr3 = new (Array);
	
	while(i< arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}
		else if(arr1->A[i] > arr2->A[j]){
			arr3->A[k++]=arr2->A[j++];
		}
		else{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	
	for( ; i<arr1->length; i++){
		arr3->A[k++]=arr1->A[i];
	}
	
	for( ; j<arr2->length; j++){
		arr3->A[k++]=arr2->A[j];
	}
	
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}


// if union are sorted order video 117.
struct Array *Intersection(Array *arr1, Array *arr2){
	
	int i, j, k;
	i=j=k=0;
	
	struct Array *arr3 = new (Array);
	
	while(i< arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			i++;
		}
		else if(arr1->A[i] > arr2->A[j]){
			j++;
		}
		else{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}



// if Difference are sorted order video 117.
struct Array *Difference(Array *arr1, Array *arr2){
	
	int i, j, k;
	i=j=k=0;
	
	struct Array *arr3 = new (Array);
	
	while(i< arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}
		else if(arr1->A[i] > arr2->A[j]){
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	
	for( ; i<arr1->length; i++){
		arr3->A[k++]=arr1->A[i];
	}

	
	arr3->length = k;
	arr3->size = 6;
	return arr3;
}



int main(){
	Array arr1={{1,2,3},10,3};
	Array arr2={{2,5,6},10,3};
	
	struct Array *arr3;
	arr3 = Merge(&arr1, &arr2);
	
	Display(*arr3);
	
	return 0;
}
