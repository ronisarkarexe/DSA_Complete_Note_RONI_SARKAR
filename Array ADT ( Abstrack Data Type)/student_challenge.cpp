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
	cout<<endl;
}

// find missing element {{1,2,3,4,5,6,8,9,10},20,10} sorted array
int Sum(Array arr){
	int sum = 0, n;
	n = arr.A[arr.length-1];
	for(int i=0; i<arr.length; i++){
		sum+=arr.A[i];
	}
	
	int s = n *( n+1 )/ 2;
	
	cout<<"Sum is: "<<s - sum;
}

// find missing element {{6,7,8,10,11,12,13,14,15,16},20,10} sorted array
int Asum(Array arr){
	int l = arr.A[0];
	int h = arr.A[arr.length-1];
	int n = arr.length;
	int diff = l - 0;
	
	for(int i=0; i<n; i++){
		if(arr.A[i]-i !=diff){
			cout<<"Missing element is: "<<i + diff;
			break;
		}
	}
}


// Multiple mising element in array in sorted array
// {{4,5,6,7,8,10,11,16,19,24},20,10};
int Msum(Array arr){
	int l = arr.A[0];
	int h = arr.A[arr.length-1];
	int n = arr.length;
	int diff = l - 0;
	
	for(int i=0; i<n; i++){
		if(arr.A[i]-i !=diff){
			while(diff < arr.A[i]-i){
				cout<<i + diff<<" ";
				diff++;
			}
		}
	}
}


int Max(Array arr){
	
	int max = arr.A[0];
	for(int i=0; i<arr.length; i++){
		if(max < arr.A[i+1]){
			max = arr.A[i+1];
		}
	}
	return max;
}

// firster method find missing element in unsorted array
// {{3,7,4,9,12,6,1,11,2,10},20,10}; Ans: 5,8
int FirsterME(Array arr){
	int l = arr.A[0];
	int h = Max(arr);
	int n = arr.length;
	int H[h] = {0};
	
	for(int i=0; i<n; i++){
		H[arr.A[i]]++;
	}
	for(int i=l; i<=h; i++){
		if(H[i]==0){
			cout<<i<<" ";
		}
	}
}

// finding Duplicates in sorted array
// {3,6,4,4,4,6,6,11,11,11},20,10}; Ans: 4,6,11;
int FDuplicates(Array arr){
	int l = 0;
	
	for(int i=0; i<arr.length; i++){
		if(arr.A[i]==arr.A[i+1] && arr.A[i] != l){
			cout<<arr.A[i]<<" ";
			l = arr.A[i];
		}
	}
}

// Counting Duplicates in sorted Array = 0(n)
// {3,6,4,4,4,6,6,11,11,11},20,10}; Ans: 4-3, 6-2, 11-3
int CDuplicates(Array arr){
	int j = 0;
	
	for(int i=0; i<arr.length-1; i++){
		if(arr.A[i]==arr.A[i+1]){
			j = i+1;
			while(arr.A[j]==arr.A[i])j++;
			cout<<arr.A[i]<<" "<<(j-i)<<endl;
			i = j - 1;
		}
	}
}

// {{2,6,4,6,4,4,6,11,11,2},20,11}; Ans: 2-2, 4-3, 6-3, 11-2;
// 0(n)
int FDuplicatesHash(Array arr){
	int l = arr.A[0];
	int n = Max(arr);
	int H[n] = {0};
	
	for(int i=0; i<arr.length; i++){
		H[arr.A[i]]++;
	}
	
	for(int i=0; i<=n; i++){
		if(H[i]>1){
			cout<<i<<" "<<H[i]<<endl;
		}
	}
}

// Without hash table 
// {{2,6,4,6,4,4,6,11,11,2},20,11}; Ans: 2-2, 4-3, 6-3, 11-2;
// 0(n square)
int FDuplicatesWOH(Array arr){
	for(int i=0; i<arr.length-1; i++){
		int count = 1;
		if(arr.A[i] != -1){
			
			for(int j=i+1; j<arr.length; j++){
				if(arr.A[i]==arr.A[j]){
					count++;
					arr.A[j]=-1;
				}
			}
			if(count > 1){
				cout<<arr.A[i]<<" "<<count<<endl;
			}
		}
	}
}

// finding a pair element of with sum unsorted
// 0(n square ) {{6,3,8,10,16,7,5,2,9,14},20,10};
int findingPairElement(Array arr, int k){
	for(int i=0; i<arr.length-1; i++){
		for(int j=i+1; j<arr.length; j++){
			if(arr.A[i]+arr.A[j]==k){
				cout<<arr.A[i]<<" , "<<arr.A[j]<<" = "<<k<<endl;
			}
		}
	}
}

// finding a pair element of with sum sorted list
// 0(n)
int findingPairElementUnsorted(Array arr, int k){
	int i = 0;
	int j = arr.length-1;
	
	while(i<j){
		if(arr.A[i]+arr.A[j]==k){
			cout<<arr.A[i]<<" , "<<arr.A[j]<<" = "<<k<<endl;
			i++;
			j--;
		}
		else if(arr.A[i]+arr.A[j]<k){
			i++;
		}
		else{
			j--;
		}
	}
}

// finding a par element with hash table sorted and unsorted worked as well
int findingPairElementHash(Array arr, int k){
	int n = Max(arr);
	int H[n] = {0};
	
	for(int i=0; i<arr.length; i++){
		if(H[k - arr.A[i]] != 0){
			cout<<arr.A[i]<<" , "<<k-arr.A[i]<<" = "<<k<<endl;
		}
		H[arr.A[i]]++;
	}
}


int main(){
	Array arr={{1,3,4,5,6,8,9,10,12,14},20,10};
	//Display(arr);
	findingPairElementUnsorted(arr, 10);
	return 0;
}
