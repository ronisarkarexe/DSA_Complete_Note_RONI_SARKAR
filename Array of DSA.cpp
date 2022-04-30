#include<iostream>

using namespace std;

struct Array{
	int A[20];
	int size;
	int length;
};

int display( Array arr){
	cout<<"Elements are :"<<endl;
	for(int i=0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
	cout<<endl;
}

int append(Array *arr, int n){
	
	if(arr->length<arr->size){
		arr->A[arr->length]=n;
	}
	arr->length++;
}

int insert(Array *arr, int index, int n){
	
	if(index>=0 && index<arr->length){
		for(int i=arr->length; i>index; i--){
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=n;
		arr->length++;
	}
}

int Delete(Array *arr, int index){
	int x = 0;
	if(index>=0 && index<arr->length){
		x = arr->A[index];
		for(int i=index; i<=arr->length; i++){
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
		return x;
	}
}

int LinerSearch(Array *arr, int key){
	
	int count = 0;
	for(int i=0;i<arr->length; i++){
		if(arr->A[i]==key){
			return i;
			count=1;
		}
	}
	if(count == 1){
		return -1;
	}
}

int BinarySearch(Array arr, int key){
	
	int f = 0;
	int l = arr.length-1;
	int mid;
	
	while(f<l){
		mid = (f+l)/2;
		if(arr.A[mid]==key){
			return mid;
		}else if(arr.A[mid]<key){
			f=mid+1;
		}else{
			l=mid-1;
		}
	}
	return -1;
}

int get(Array arr,int index){
	
	if(index>=0 && index<arr.length){
		return arr.A[index];
	}
}

int set(Array *arr, int index, int x){
	
	if(index>=0 && index<arr->length){
		arr->A[index]=x;
	}
}

int max(Array arr){
	
	int max = arr.A[0];
	for(int i=0; i<arr.length; i++){
		if(arr.A[i]>max){
			max = arr.A[i];
		}
	}
	return max;
}

int min(Array arr){
	
	int min = arr.A[0];
	for(int i=0; i<arr.length; i++){
		if(arr.A[i]<min){
			min=arr.A[i];
		}
	}
	return min;
}

float sum(Array arr){
	
	int sum = 0;
	for(int i=0; i<arr.length; i++){
		sum+=arr.A[i];
	}
	return (float)sum/arr.length;
}

int reverse(Array *arr){
	
	int *B;
	
	B = new int(arr->length);
	for(int i=arr->length-1, j=0; i>=0; i--,j++){
		B[j]=arr->A[i];
	}
	for(int i=0; i<arr->length; i++){
		arr->A[i]=B[i];
	}
}

int insertsort(Array *arr, int n){
	
	int i = arr->length-1;
	
	while(arr->A[i]>n){
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=n;
	arr->length++;
	
}

int sort(Array *arr){
	
	for(int i=0; i<arr->length-1; i++){
		if(arr->A[i]>arr->A[i+1]){
			return 0;
		}
	}
	return 1;
}

int swap(int *a, int *b){
	
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int navigrate(Array *arr){
	
	int i = 0;
	int j = arr->length-1;
	
	while(i<j){
		while(arr->A[i]<0){
			i++;
		}
		while(arr->A[j]>=0){
			j--;
		}
		if(i<j){
			swap(&arr->A[i],&arr->A[j]);
		}
	}
	
}

Array* margin(Array *arr1, Array *arr2){
	
	int i,j,k;
	i=j=k=0;
	Array *arr3 = new (Array);
	
	while(i<arr1->length && j<arr2->length){
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
	for(;j<arr2->length; j++){
		arr3->A[k++]=arr2->A[j];
	}
	arr3->length = arr1->length+arr2->length;
	
	return arr3;
}

Array* Union(Array *arr1, Array *arr2){
	
	int i,j,k;
	i=j=k=0;
	Array *arr3 = new (Array);
	
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}
		else if(arr2->A[j]<arr1->A[i]){
			arr3->A[k++]=arr2->A[j++];
		}else{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	for(; i<arr1->length; i++){
		arr3->A[k++]=arr1->A[i];
	}
	for(;j<arr2->length; j++){
		arr3->A[k++]=arr2->A[j];
	}
	arr3->length = k;
	return arr3;
}

Array* intersection(Array *arr1, Array *arr2){
	
	int i,j,k;
	i=j=k=0;
	Array *arr3 = new (Array);
	
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			i++;
		}
		else if(arr2->A[j]<arr1->A[i]){
			j++;
		}else{
			arr3->A[k++]=arr1->A[i++];
			j++;
		}
	}
	
	arr3->length = k;
	return arr3;
}

Array* diffarance(Array *arr1, Array *arr2){
	
	int i,j,k;
	i=j=k=0;
	Array *arr3 = new (Array);
	
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			arr3->A[k++]=arr1->A[i++];
		}
		else if(arr2->A[j]<arr1->A[i]){
			j++;
		}else{
			i++;
			j++;
		}
	}
	
	for(;i<arr1->length; i++){
		arr3->A[k++]=arr1->A[i];
	}
	arr3->length = k;
	return arr3;
}


int main(){
	
	Array arr1={{3,4,5,6,10},20,5};
	Array arr2={{2,4,5,7,12},20,5};
	
	Array *arr3;
	arr3 = diffarance(&arr1,&arr2);
	display(*arr3);
	
	return 0;
}
