#include<bits/stdc++.h>

using namespace std;

struct Node{
	Node *prev;
	int data;
	Node *next;
}*first=NULL;

int creat(int A[], int n){
	Node *t,*last;
	
	first= new Node;
	first->data=A[0];
	first->prev=first->next=NULL;
	last=first;
	
	for(int i=1; i<n; i++){
		t=new Node;
		t->data=A[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}
}

int display(Node *p){
	
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int length(Node *p){
	int len=0;
	
	while(p){
		len++;
		p=p->next;
	}
	return len;
}

//Insert for dubly linked list
int idubly(Node *p, int index, int x){
	
	Node *t;
	
	if(index<0 || index>length(p)){
		return -1;
	}
	
	if(index==0){
		t = new Node;
		t->data=x;
		t->prev=NULL;
		t->next=first;
		first->prev=t;
		first=t;
	}else{
		for(int i=0; i<index-1; i++){
			p=p->next;
		}
		t= new Node;
		t->data=x;
		t->next=p->next;
		t->prev=p;
		if(p->next!=NULL){
			p->next->prev=t;
		}
		p->next=t;
	}
}

//delete from doubly linked list

int Delete(Node *p, int index){
	int x=-1;;
	Node *q;
	if(index<1 || index>length(p)){
		return -1;
	}
	
	if(index==1){
		first=first->next;
		if(first){
			first->prev=NULL;
		}
		x=p->data;
		delete p;
	}else{
		
		for(int i=0; i<index-1; i++){
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next){
			p->next->prev=p->prev;
		}
		x=p->data;
		delete p;
	}
	return x;
}


//Reverse a Doubly linked list
int rDoubly(Node *p){
	
	Node *temp;
	
	while(p!=NULL){
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL && p->next==NULL){
			first=p;
		}
	}
}

//Find middle node of a linked list

int middle(Node *p){
	
	Node *q;
	p=q=first;
	
	while(q!=NULL){
		q=q->next;
		if(q){
			q=q->next;
		}
		if(q){
			p=p->next;
		}
	}
	cout<<p->data<<endl;
}


int main(){
	
	int A[] = {5,4,3,2,1,9};
	creat(A,6);
	
	middle(first);
	display(first);
	
	return 0;
}
