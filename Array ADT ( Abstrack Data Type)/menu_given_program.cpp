#include<iostream>

using namespace std;

struct Array {
	int *A;
	int size;
	int length;
};

int Display(Array arr){
	
	cout<<"Elements are: ";
	for(int i=0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
}

int Add(Array *arr, int x){
	if(arr->length<arr->size){
		
		arr->A[arr->length]=x;
		arr->length++;
		//arr->A[arr->length++]=x; 1 line code
	}
}

int Insert(Array *arr, int index, int x){
	
	if( index >= 0 && index <= arr->length ){
		for(int i=arr->length; i>index; i--){
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=x;
		arr->length++;
	}
}


int Delete(Array *arr, int index){
	int x = 0;
	if(index> 0 && index<arr->length){
		x = arr->A[index];
		for(int i=index; i<arr->length-1; i++){
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
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
int Linear(Array arr, int x){
	for(int i=0; i<arr.length; i++){
		if(arr.A[i]==x){
			return i;
		}
	}
	return -1;
}

// Transposition liner
int Linear1(Array *arr, int x){
	for(int i=0; i<arr->length; i++){
		if(arr->A[i]==x){
			swap(&arr->A[i], &arr->A[i-1]);
			return arr->A[i-1];
		}
	}
	return -1;
}

// Move to Front / head liner
int Linear2(Array *arr, int x){
	for(int i=0; i<arr->length; i++){
		if(arr->A[i]==x){
			swap(&arr->A[i], &arr->A[0]);
			return arr->A[0];
		}
	}
	return -1;
}


int Binary(Array arr, int x){
	int s = 0;
	int e = arr.length - 1;
	int mid;
	
	while(s<=e){
		mid = (s+e)/2;
		
		if(arr.A[mid]==x){
			return mid;
		}
		else if(arr.A[mid] < x){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return -1;
}


int Get(Array arr, int index){
	if(index>=0 && index<arr.length){
		return arr.A[index];
	}
	return -1;
}

int Set(Array *arr, int index, int x){
	if(index>=0 && index<=arr->length){
		arr->A[index]= x;
	}
	return -1;
}

// Max
int Max(Array arr){
	int max = arr.A[0];
	for(int i=1; i<arr.length; i++){
		if(arr.A[i] > max)	{
			max = arr.A[i];
		}
	}
	return max;
}

// Min
int Min(Array arr){
	int min = arr.A[0];
	for(int i=1; i<arr.length; i++){
		if(arr.A[i]<min){
			min = arr.A[i];
		}
	}
	return min;
}

// Sum of all element
int Sum(Array arr){
	int sum = 0;
	for(int i=0; i<arr.length; i++){
		sum+=arr.A[i];
	}
	return sum;
}

int Avg(Array arr){
	
	return (float)Sum(arr)/arr.length;
	
}

int rSum(Array arr){
	int n = arr.length;
	if(n<0){
		return 0;
	}
	else{
		return (arr, n-1) + arr.A[n];
	}
}


// Reverse
int Reverse(Array *arr){
	
	int *B = new int[arr->length];
	int i, j;
	
	for(i = arr->length-1, j = 0; i>=0; i--, j++){
		B[j] = arr->A[i];
	}
	
	for(i = 0, j = 0; i<arr->length; i++, j++){
		arr->A[i] = B[j];
	}
}

// Interchange reverse
int InReverse(Array *arr){
	int i, j;
	for(i=0, j=arr->length-1; i<j; i++, j--){
		swap(&arr->A[i], &arr->A[j]);
	}
}

// Right sift
int RightSift(Array *arr){
	
	for(int i=0; i<arr->length; i++){
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length-1] = 0;
}

// Right sift Rotated
int RightSiftRotate(Array *arr){
	
	int last = arr->A[0];
	
	for(int i=0; i<arr->length-1; i++){
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length-1] = last;
}

// Left sift
int LeftSift(Array *arr){
	
	for(int i=arr->length; i>0; i--){
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0] = 0;
}

// Left sift Rotated
int LeftSiftRotated(Array *arr){
	int first = arr->A[arr->length-1];
	for(int i=arr->length; i>0; i--){
		arr->A[i]=arr->A[i-1];
	}
	arr->A[0] = first;
}

// insert an element in the sorted array
int Insert_In_Sorted_Array(Array *arr, int n){
	int i = arr->length -1;
	if(arr->length==arr->size){
		return -1;
	}
	while(i>=0 && arr->A[i]>n){
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=n;
	arr->length++;
}


// check if array is sorted or not
int ArrayIsSorted(Array arr){
	int count = 0;
	for(int i=0; i<arr.length-1; i++){
		if(arr.A[i]>arr.A[i+1]){
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
int Rearrage_Positive_And_Negative(Array *arr){
	int i = 0,j = arr->length-1;
	while(i<j){
		while(arr->A[i]<0){
			i++;
		}
		while(arr->A[j]>=0){
			j--;
		}
		if(i<j){
			swap(&arr->A[i], &arr->A[j]);
		}
	}
}



// Main
int main(){
	Array arr;
	int ch, x, index;
	
	cout<<"Enter Size of Array: ";
	cin>>arr.size;
	
	arr.A = new int[arr.size];
	arr.length = 0;
	
	do{
	cout<<"Manu\n 1. Insert 2. Delete 3. Search 4. Sum 5. Display 6. Exit\n";
	
	cout<<"Enter your choice: ";
	cin>>ch;
	
	switch(ch){
		case 1:{
			cout<<"Enter index and element: ";
			cin>>index>>x;
			Insert(&arr, index, x);
			break;
		}
		case 2:{
			cout<<"Enter index: ";
			cin>>index;
			x = Delete(&arr, index);
			cout<<"Deleted Element is: "<<x;
			break;
		}
		case 3:{
			cout<<"Enter element to search: ";
			cin>>x;
			index = Linear(arr, x);
			cout<<"Search item are: "<<index;
			break;
		}
		case 4:{
			cout<<"Sum is: "<<Sum(arr);
			break;
		}
		case 5:{
			Display(arr);
			cout<<endl;
			break;
		}
	}
} while(ch<6);

	return 0;
}










