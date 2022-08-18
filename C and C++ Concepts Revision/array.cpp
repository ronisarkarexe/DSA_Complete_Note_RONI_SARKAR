#include<iostream>

using namespace std;

//careers.vest@vestibulum.net
//venkatasrini2021@gmail.com


// when you dont declaration size then you empliment forEach loop for batter respons

int main(){
	
	int a[10]={1,2,3,4,5,6,7,8};
	
	for(int i=0; i<10; i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	//forEach method for loop
	for(int x:a){
		cout<<x<<" ";
	}
	
	return 0;
}
