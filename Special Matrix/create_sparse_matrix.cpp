#include<iostream>

using namespace std;

struct Element{
	int i;
	int j;
	int x;
};

struct Sparse{
	int m;
	int n;
	int num;
	Element *ele;
};

int create(Sparse *s){
	cout<<"Enter Dimensions: ";
	cin>>s->m;
	cin>>s->n;
	
	cout<<"Number of non-zero: ";
	cin>>s->num;
	
	s->ele = new Element[s->num];
	
	cout<<"Enter non-zero element: "<<endl;
	for(int i=0; i<s->num; i++){
		cin>>s->ele[i].i;
		cin>>s->ele[i].j;
		cin>>s->ele[i].x;
	}
}


int Display(Sparse s){
	int k = 0;
	for(int i=0; i<s.m; i++){
		for(int j=0; j<s.n; j++){
			if(i == s.ele[k].i && j == s.ele[k].j){
				cout<<s.ele[k].x<" ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}


int main(){
	Sparse s;
	
	create(&s);
	Display(s);
	return 0;
}
