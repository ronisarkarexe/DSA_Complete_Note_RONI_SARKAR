#include<iostream>

using namespace std;

class Array {
	
	private:
		int *A;
		int size;
		int length;
		
	public:
		Array(){
			size=10;
			length = 0;
			A = new int[size];
		}
		Array(int sz){
			size=sz;
			length = 0;
			A = new int[size];
		}
		~Array(){
			delete []A;
		}
		
	int Display();
	int Add(int x);
	int Insert(int index, int x);
	int Delete(int index);
	int Linear(int x);
	int Linear1(int x);
	int Linear2(int x);
	int Binary(int x);
	int Get(int index);
	int Set(int index, int x);
	int swap(int *x, int *y);
	int Max();
	int Min();
	int Sum();
	int Avg();
	int Reverse();
	int InReverse();
	int RightSift();
	int RightSiftRotate();
	int LeftSift();
	int LeftSiftRotated();
	int Insert_In_Sorted_Array(int n);
	int ArrayIsSorted();
	int Rearrage_Positive_And_Negative();
	struct Array *Merge(Array *arr2);
	struct Array *Union(Array *arr1, Array *arr2);
	struct Array *Intersection(Array *arr1, Array *arr2);
	struct Array *Difference(Array *arr1, Array *arr2);
};


int Array::Display(){
	
	cout<<"Elements are: ";
	for(int i=0; i<length; i++){
		cout<<A[i]<<" ";
	}
}

int Array::Add(int x){
	if(length<size){
		A[length]=x;
		length++;
		//arr->A[arr->length++]=x; 1 line code
	}
}

int Array::Insert(int index, int x){
	
	if( index >= 0 && index <= length ){
		for(int i=length; i>index; i--){
			A[i]=A[i-1];
		}
		A[index]=x;
		length++;
	}
}


int Array::Delete(int index){
	int x = 0;
	if(index> 0 && index<length){
		x = A[index];
		for(int i=index; i<length-1; i++){
			A[i]=A[i+1];
		}
		length--;
		return x;
	}
	return 0;
}

int swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// Liner Search
int Array::Linear(int x){
	for(int i=0; i<length; i++){
		if(A[i]==x){
			return i;
		}
	}
	return -1;
}

// Transposition liner
int Array::Linear1(int x){
	for(int i=0; i<length; i++){
		if(A[i]==x){
			//swap(&A[i], &A[i-1]);
			return A[i-1];
		}
	}
	return -1;
}

// Move to Front / head liner
int Array::Linear2(int x){
	for(int i=0; i<length; i++){
		if(A[i]==x){
			//swap(&A[i], &A[0]);
			return A[0];
		}
	}
	return -1;
}


int Array::Binary(int x){
	int s = 0;
	int e = length - 1;
	int mid;
	
	while(s<=e){
		mid = (s+e)/2;
		
		if(A[mid]==x){
			return mid;
		}
		else if(A[mid] < x){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return -1;
}


int Array::Get(int index){
	if(index>=0 && index<length){
		return A[index];
	}
	return -1;
}

int Array::Set(int index, int x){
	if(index>=0 && index<=length){
		A[index]= x;
	}
	return -1;
}

// Max
int Array::Max(){
	int max = A[0];
	for(int i=1; i<length; i++){
		if(A[i] > max)	{
			max = A[i];
		}
	}
	return max;
}

// Min
int Array::Min(){
	int min = A[0];
	for(int i=1; i<length; i++){
		if(A[i]<min){
			min = A[i];
		}
	}
	return min;
}

// Sum of all element
int Array::Sum(){
	int sum = 0;
	for(int i=0; i<length; i++){
		sum+=A[i];
	}
	return sum;
}


int Array::Avg(){
	
	return (float)Sum()/length;
	
}


// Reverse
int Array::Reverse(){
	
	int *B = new int[length];
	int i, j;
	
	for(i = length-1, j = 0; i>=0; i--, j++){
		B[j] = A[i];
	}
	
	for(i = 0, j = 0; i<length; i++, j++){
		A[i] = B[j];
	}
}

// Interchange reverse
int Array::InReverse(){
	int i, j;
	for(i=0, j=length-1; i<j; i++, j--){
		//swap(&A[i], &A[j]);
	}
}

// Right sift
int Array::RightSift(){
	
	for(int i=0; i<length; i++){
		A[i]=A[i+1];
	}
	A[length-1] = 0;
}

// Right sift Rotated
int Array::RightSiftRotate(){
	
	int last = A[0];
	
	for(int i=0; i<length-1; i++){
		A[i]=A[i+1];
	}
	A[length-1] = last;
}

// Left sift
int Array::LeftSift(){
	
	for(int i=length; i>0; i--){
		A[i]=A[i-1];
	}
	A[0] = 0;
}

// Left sift Rotated
int Array::LeftSiftRotated(){
	int first = A[length-1];
	for(int i=length; i>0; i--){
		A[i]=A[i-1];
	}
	A[0] = first;
}

// insert an element in the sorted array
int Array::Insert_In_Sorted_Array(int n){
	int i = length -1;
	if(length==size){
		return -1;
	}
	while(i>=0 && A[i]>n){
		A[i+1]=A[i];
		i--;
	}
	A[i+1]=n;
	length++;
}


// check if array is sorted or not
int Array::ArrayIsSorted(){
	int count = 0;
	for(int i=0; i<length-1; i++){
		if(A[i]>A[i+1]){
			count = 1;
			break;
		}
	}
	
	if(count == 0){
		cout<<"Array is sorted"<<endl;
	}else{
		cout<<"Array is not sorted"<<endl;
	}
}

// check positive or negative number and sift it
int Array::Rearrage_Positive_And_Negative(){
	int i = 0,j = length-1;
	while(i<j){
		while(A[i]<0){
			i++;
		}
		while(A[j]>=0){
			j--;
		}
		if(i<j){
			//swap(&A[i], &A[j]);
		}
	}
}


struct Array *Merge(Array *arr2){
	
	int i, j, k;
	i=j=k=0;
	
	struct Array *arr3 = new (Array);
	
	while(i<length && j<arr2->length){
		if(A[i]<arr2->A[j]){
			arr3->A[k++]=A[i++];
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
	arr3->size = 10;
	return arr3;
}



int main(){
	Array *arr;
	int ch, x, index, sz;
	
	cout<<"Enter Size of Array: ";
	cin>>sz;
	
	arr = new Array(sz);
	
	do{
	cout<<"Manu\n 1. Insert 2. Delete 3. Search 4. Sum 5. Display 6. Exit\n";
	
	cout<<"Enter your choice: ";
	cin>>ch;
	
	switch(ch){
		case 1:{
			cout<<"Enter index and element: ";
			cin>>index>>x;
			arr->Insert(index, x);
			break;
		}
		case 2:{
			cout<<"Enter index: ";
			cin>>index;
			x = arr->Delete(index);
			cout<<"Deleted Element is: "<<x;
			break;
		}
		case 3:{
			cout<<"Enter element to search: ";
			cin>>x;
			index = arr->Linear(x);
			cout<<"Search item are: "<<index;
			break;
		}
		case 4:{
			cout<<"Sum is: "<<arr->Sum();
			break;
		}
		case 5:{
			arr->Display();
			cout<<endl;
			break;
		}
	}
} while(ch<6);
return 0;
}
