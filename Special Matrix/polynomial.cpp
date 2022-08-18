#include<iostream>
#include<math.h>

using namespace std;

struct Term{
	int coff;
	int exp;
};

struct Poly{
	int n;
	Term *terms;
};

int create(Poly *p){
	int i;
	cout<<"Number of terms? ";
	cin>>p->n;
	p->terms = new Term[p->n];
	
	cout<<"Enter terms "<<endl;
	for(i=0; i<p->n; i++){
		cin>>p->terms[i].coff;
		cin>>p->terms[i].exp;
	}
}

int display(Poly p){
	int i;
	for(i=0; i<p.n; i++){
		cout<<p.terms[i].coff<<" x "<<p.terms[i].exp<<" + ";
	}
	cout<<endl;
}

Poly *add(Poly *p1, Poly *p2){
	int i,j,k;
	Poly *sum;
	
	sum = new Poly;
	
	sum->terms = new Term[p1->n + p2->n];
	i=j=k=0;
	while(i<p1->n && j<p2->n){
		if(p1->terms[i].exp > p2->terms[j].exp){
			sum->terms[k++] = p1->terms[i++];
		}
		else if(p1->terms[i].exp < p2->terms[j].exp){
			sum->terms[k++] = p1->terms[j++];
		}
		else{
			sum->terms[k].exp = p1->terms[i].exp;
			sum->terms[k++].coff=p1->terms[i++].coff + p2->terms[j++].coff;
			
		}
	}
	
	for(; i<p1->n; i++){
		sum->terms[k++] = p1->terms[i];
	}
	for(; j<p2->n; j++){
		sum->terms[k++] = p2->terms[j];
	}
	
	sum->n = k;
	return sum;
}

int main(){
	Poly p1,p2,*p3;
	//Poly p1;
	create(&p1);
	create(&p2);
	
	p3 = add(&p1, &p2);
	cout<<endl;
	display(p1);
	cout<<endl;
	display(p2);
	cout<<endl;
	display(*p3);
	return 0;
}
