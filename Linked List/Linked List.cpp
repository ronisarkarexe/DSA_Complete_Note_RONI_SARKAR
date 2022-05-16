#include <bits/stdc++.h>

using namespace std;

struct Node{
	
	int data;
	Node *next;
}*first,*second=NULL,*third=NULL;

/* Create Linked List */
int create(int A[], int n){
	
	int i;
	Node *t, *last;
	first = new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(int i=1; i<n; i++){
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

/* Create2 Linked List */
int create2(int A[], int n){
	
	int i;
	Node *t, *last;
	second = new Node;
	second->data=A[0];
	second->next=NULL;
	last=second;
	
	for(int i=1; i<n; i++){
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

/* Display All Element*/
int display(Node *p){
	
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

/* Display All Element with recursive way*/
int rdisplay(Node *p){
	
	if(p!=NULL){
		rdisplay(p->next);
		cout<<p->data<<" ";
	}
}

/* Counting length in Array */
int count(Node *p){
	int l = 0;
	
	while(p!=0){
		l++;
		p=p->next;
	}
	return l;
}

//Counting Length another way
int length(Node *p){
	int len=0;
	
	do{
		len++;
		p=p->next;
	}
	while(p!=first);
	
	return len;
}

/* Counting Length with Recursive Way */
int rcount(Node *p){
	
	if(p==0){
		return 0;
	}else{
		return rcount(p->next)+1;
	}
}


/* Sum Of All Element */
int sum(Node *p){
	
	int s = 0;
	while(p!=NULL){
		s+=p->data;
		p=p->next;
	}
	return s;
}

/* Sum Of All Element With Recursive way */
int rsum(Node *p){
	if(p==0){
		return 0;
	}else{
		return sum(p->next)+p->data;
	}
}

// Maximum Element in Linked List
int max(Node *p){
	
	int m = INT_MIN;
	while(p!=NULL){
		if(p->data>m){
			m = p->data;
		}else{
			p=p->next;
		}
	}
	return m;
}

// Maximum Element in Linked List with Recursion

int rmax(Node *p){
	int x = 0;
	if(p==0){
		return INT_MIN;
	}else{
		x = rmax(p->next);
		if(x>p->data){
			return x;
		}else{
			return p->data;
		}
	}
}

// Maximum element of ternary element

int tmax(Node *p){
	int x = 0;
	if(p==0)
		return INT_MIN;
		
	x = rmax(p->next);
	return x>p->data ? x : p->data;
}

// Liner Search
Node* lsearch(Node *p, int key){
	
	while(p!=NULL){
		if(key==p->data){
			return p;
		}
		p=p->next;
	}
	return NULL;
}

// Liner Search with Recursion
Node * rlsearch(Node *p, int key){
	
	if(p==NULL){
		return NULL;
	}else if(key == p->data){
		return p;
	}
	return rlsearch(p->next,key);
}

// Liner Search with Move to head
Node * msearch(Node *p, int key){
	Node *q = NULL;
	
	while(p!=NULL){
		if(key==p->data){
			q->next = p->next;
			p->next = first;
			first = p;
			return p;
		}
		q=p;
		p=p->next;
	}
}

/* 
  This main for Liner Search
  
int main(){
	
	Node *temp;
	int A[] = {1,2,3,4,8,5};
	create(A,6);
	
	temp=msearch(first,3);
	if(temp){
		cout<<"Key is Found "<<temp->data;
	}else{
		cout<<"Key is not Found ";
	}
	cout<<endl;
	display(first);
	return 0;
}

*/

// Insert in Linked List
int insert(Node *p, int index, int x){
	
	Node *t = new Node;
	t->data=x;
	
	if(index < 0 || index > count(p)){
		return 0;
	}
	
	if(index==0){
		t->next=first;
		first=t;
	}else{
		for(int i=0; i<index-1; i++){
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
	}
}

// Insert code in Sorted a linked List
int soredInsert(Node *p, int x){
	Node *t,*q=NULL;
	t = new Node;
	t->data = x;
	t->next = NULL;
		
	if(first==NULL){
		first=t;
	}
	else{
		while(p && p->data<x){
			q=p;
			p=p->next;
		}
		if(p==first){
			t->next=first;
			first=t;
		}else{
			t->next=q->next;
			q->next=t;
		}
	}
}

// Delete item in linked list
int Delete(Node *p, int pos){
	Node *q=NULL;
	int x=-1;
	
	if(pos<1 || pos> count(p)){
		return -1;
	}
	
	if(pos==1){
		q=first;
		x=first->data;
		first=first->next;
		delete q;
		return x;
	}else{
		
		for(int i=0; i<pos-1 && p; i++){
			q=p;
			p=p->next;
		}
		
		q->next=p->next;
		x=p->data;
		delete p;
		return x;
	}
}

// Check if a linked list sorted or not
int sorted(Node *p){
	
	int min = INT_MIN;
	
	while(p!=NULL){
		if(p->data<min){
			return 0;
		}
		min=p->data;
		p=p->next;
	}
	return 1;
}

// Remove Duplicateds from Sroted linked list
int duplicated(Node *p){
	
	Node *q;
	
	p=first;
	q=first->next;
	
	while(q!=NULL){
		if(p->data!=q->data){
			p=q;
			q=q->next;
		}
		else{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
}

// Reversing a linked list
int reverse(Node *p){
	
	int A[count(p)],i;
	p=first;
	i=0;
	while(p!=NULL){
		A[i]=p->data;
		p=p->next;
		i++;
	}
	p=first;
	i--;
	while(p!=NULL){
		p->data=A[i--];
		p=p->next;
	}
}

// Reverse a linked with slick
int reverse2(Node *p){
	p=first;
	Node *q=NULL, *r=NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}

// recervive reverse a linked list
int reverse3(Node *q, Node *p){
	
	if(p){
		reverse3(p,p->next);
		p->next=q;
	}else{
		first = q;
	}
}

//Concatenate two linked list
int conc(Node *p, Node *q){
	
	third=p;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=q;
	q=NULL;
}

//Marging two linked list
int mar(Node *p, Node *q){
	
	Node *last;
	if(p->data<q->data){
		third=last=p;
		p=p->next;
		last->next=NULL;
	}else{
		third=last=q;
		q=q->next;
		last->next=NULL;
	}
	while(p!=NULL && q!=NULL){
		if(p->data<q->data){
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
		}else{
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
	}
	if(p!=NULL){
		last->next=p;
	}else{
		last->next=q;
	}
}

/*
int main(){
	
	int A[]={10,20,30,40,50};
	int B[]={5,15,25,35,45};
	
	create(A,5);
	create2(B,5);
	
	mar(first,second);
	
	display(third);
	
	return 0;
}
*/

//circular linked list

int circular(Node *p){
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=first);
}

//recursion circular
int rcircular(Node *p){
	int flag=0;
	if(p!=first || flag==0){
		flag=1;
		cout<<p->data<<" ";
		rcircular(p->next);
	}
}


//insert circular
int insertCir(Node *p, int index, int x){
	
	Node *t;
	int i;
	
	if(index<0 || index>count(p)){
		return -1;
	}
	if(index==0){
		
		t=new Node;
		t->data=x;
		if(first==NULL){
			first=t;
			first->next=first;
		}else{
			while(p->next!=first){
				p=p->next;
			}
			p->next=t;
			t->next=first;
			first=t;
		}
		
	}else{
		for(int i=0; i<index-1; i++){
			p=p->next;
		}
		t=new Node;
		t->data=x;
		t->next=p->next;
		p->next=t;
	}
}


//Delete from circular linked list
int dcircular(Node *p, int pos){
	Node *q;
	int x;
	if(pos<0 || pos>count(first)){
		return -1;
	}
	
	if(pos==1){
		while(p->next!=first){
			p=p->next;
		}
		x=first->data;
		if(p==first){
			delete(first);
			first=NULL;
		}else{
			p->next=first->next;
			delete(first);
			first=p->next;
		}
	}else{
		p=first;
		for(int i=0; i<pos-2; i++){
			p=p->next;
		}
		q=p->next;
		p->next=q->next;
		x=q->data;
		delete(q);
	}
	return x;
}


int main(){
	
	int A[]={10,20,30,40,50};
	
	create(A,5);
	
	cout<<dcircular(first,5)<<endl;
	
	display(first);
	
	return 0;
}
